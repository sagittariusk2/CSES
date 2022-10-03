/**
 * @file playlist
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-22
 * @time 14:43
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    //code here
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i=0; i<n; i++) {
        cin >> v1[i];
    }
    queue<int> q1;
    set<int> s1;
    int ans = 0;
    for(auto i:v1) {
        if(s1.find(i)!=s1.end()) {
            while(!q1.empty() and q1.front()!=i) {
                s1.erase(q1.front());
                q1.pop();
            }
            q1.pop();
            q1.push(i);
        } else {
            s1.insert(i);
            q1.push(i);
        }
        ans = max(ans, (int)s1.size());
    }
    cout << ans << endl;
}