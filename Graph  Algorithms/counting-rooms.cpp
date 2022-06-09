/**
 * @file counting-rooms.cpp
 * @author Ritesh Ranjan (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-12-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

bool valid(int i, int j, int n, int m) {
    return (i>=0 and i<n and j>=0 and j<m);
}
pair<int, string> solve(int i, int j, vector<vector<char>> &v1, int n, int m) {
    // cout << i << " " << j << "\n";
    if(valid(i, j, n, m)) {
        if(v1[i][j]=='.') {
            v1[i][j]='*';
            pair<int, string> a = solve(i+1, j, v1, n, m);
            pair<int, string> b = solve(i, j+1, v1, n, m);
            pair<int, string> c = solve(i-1, j, v1, n, m);
            pair<int, string> d = solve(i, j-1, v1, n, m);
            if(a.first==1) {
                return make_pair(1, a.second+'D');
            }
            if(b.first==1) {
                return make_pair(1, b.second+'R');
            }
            if(c.first==1) {
                return make_pair(1, c.second+'U');
            }
            if(d.first==1) {
                return make_pair(1, d.second+'L');
            }
            return make_pair(0, "");
        } else if(v1[i][j]=='B') {
            return make_pair(1, "");
        }
    }
    return make_pair(0, "");
}

signed main() {
    int n, m, x, y;
    cin >> n >> m;
    vector<vector<char>> v1(n, vector<char>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> v1[i][j];
            if(v1[i][j]=='A') {
                x=i, y=j;
            }
        }
    }

    v1[x][y]='.';

    string ans = solve(x, y, v1, n, m).second;
    reverse(ans.begin(), ans.end());
    if(ans.size()==0) cout << "NO\n";
    else {
        cout << "YES\n";
        cout << ans.size() << "\n";
        cout << ans << "\n";
    }
}