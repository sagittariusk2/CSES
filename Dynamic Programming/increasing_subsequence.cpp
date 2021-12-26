/**
 * @file increasing_subsequence.cpp
 * @link link-object @endlink
 * @author Ritesh Ranjan (https://sagittarius.github.io)
 * @brief 
 * @version 0.1
 * @date 2021-12-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <bits/stdc++.h>
 
using namespace std;
#define int long long int
#define M 1000000007
 
signed main() {
    // fio;
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
 
    vector<int> dp;
 
    for(int i=0; i<n; i++) {
        int x=lower_bound(dp.begin(), dp.end(), a[i])-dp.begin();
        if(x==dp.size()) {
            dp.push_back(a[i]);
        } else {
            dp[x]=a[i];
        }
    }
    cout << dp.size() << "\n";
}