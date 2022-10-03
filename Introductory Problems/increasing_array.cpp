/**
 * @file increasing_array
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-10-03
 * @time 19:06
 * @link https://cses.fi/problemset/result/1819398/
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, ans=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
 
    for(int i=1; i<n; i++) {
        if(a[i]<a[i-1]) {
            ans+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<ans;
}