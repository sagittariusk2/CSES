/**
 * @file ferris_wheel
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-23
 * @time 15:15
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    //code here
    int n, x;
    cin >> n >> x;
    vector<int> v1(n);
    for(int i=0; i<n; i++) {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());
    int i=0, j=n-1, ans=0;
    while(i<j) {
        if(v1[i]+v1[j]<=x) {
            i++;
            j--;
        } else {
            j--;
        }
        ans++;
    }
    if(i==j) ans++;
    cout << ans << endl;
}