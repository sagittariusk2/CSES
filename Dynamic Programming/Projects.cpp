/**
 * @file Projects.cpp
 * @link https://cses.fi/problemset/task/1140 
 * @endlink 
 * @author Ritesh Ranjan (https://sagittarius.github.io)
 * @brief 
 * @version 0.1
 * @date 2021-12-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

bool comp(tuple<int, int, int> &a, tuple<int, int, int> &b) {
    return get<1>(a)<get<1>(b);
}

int solve(int n, vector<tuple<int, int, int>> &v1, vector<int> &p, vector<int> &dp) {
    if(dp[n]!=-1) return dp[n];
    if(n==0) return dp[0]=0;
    int x = solve(n-1, v1, p, dp);
    int t = lower_bound(p.begin(), p.end(), get<0>(v1[n-1]))-p.begin();
    int y = solve(t, v1, p, dp);
    return dp[n]=max(x, y+get<2>(v1[n-1]));
}

signed main() {
    int n, x, y, z;
    cin >> n;
    vector<tuple<int, int, int>> v1;
    for(int i=0; i<n; i++) {
        cin >> x >> y >> z;
        v1.emplace_back(x, y, z);
    }

    sort(v1.begin(), v1.end(), comp);

    vector<int> p, dp(n+1, -1);
    for(auto i:v1) {
        p.push_back(get<1>(i));
    }

    cout << solve(n, v1, p, dp) << "\n";
}