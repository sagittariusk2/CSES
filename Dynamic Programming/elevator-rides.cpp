/**
 * @file elevator-rides.cpp
 * @author Ritesh Ranjan (https://sagittariusk2.github.io)
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
 
signed main() {
    int n, x;
    cin >> n>> x;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
 
    int m = pow(2, n);
    vector<int> ans(m, LLONG_MAX);
    ans[0] = 0;
    set<int> s1;
    for(int i=1; i<m; i++) {
        int sum=0, k=i;
        string s;
        while(k) {
            if(k%2) s += '1';
            else s += '0';
            k /= 2;
        }
        while(s.length()!=n) {
            s += '0';
        }
        reverse(s.begin(), s.end());
        for(int j=0; j<n; j++) {
            if(s[j]=='1') {
                sum += a[j];
            }
        }
        if(sum<=x) {
            ans[i]=1;
            s1.insert(i);
        } else {
            for(auto k=s1.rbegin(); k!=s1.rend(); k++) {
                if(*k^i==i)
                    ans[i] = min(ans[i], ans[*k]+ans[i-*k]);
            }
            // for(int j=0; j<i; j++) {
            //     if(i^j==i) {
            //         ans[i] = min(ans[i], ans[j]+ans[i-j]);
            //     }
            // }
        }
    }

    cout << ans[m-1] << "\n";

    // int n, x;
    // cin >> n>> x;
    // vector<int> a(n);
    // for(int i=0; i<n; i++)
    //     cin >> a[i];
 
    // int m = pow(2, n);
    // vector<int> ans(m, LLONG_MAX);
    // set<int> s1;
    // ans[0]=0;
    // for(int i=1; i<m; i++) {
    //     bitset<20> b1(i);
    //     int j=0, y=n, sum=0;
    //     while(y--) {
    //         if(b1[j]==1) {
    //             sum += a[j];
    //         }
    //         j++;
    //     }
    //     if(sum<=x) {
    //         ans[i]=1;
    //         s1.insert(i);
    //     } else {
    //         for(auto k=s1.rbegin(); k!=s1.rend(); k++) {
    //             if(*k^i==i)
    //                 ans[i] = min(ans[i], ans[*k]+ans[i-*k]);
    //         }
    //     }
    // }
 
    // // for(auto i:ans) {
    // //     cout << i << " ";
    // // }
    // // cout << "\n";
 
    // // for(auto i:ans2) {
    // //     cout << i << " ";
    // // }
    // // cout << "\n";
 
    // cout << ans[m-1] << "\n";
}