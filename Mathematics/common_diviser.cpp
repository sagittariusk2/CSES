/**
 * @file common_diviser
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-08-23
 * @time 13:44
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    vector<int> v1(1000001, 0);
    vector<int> ans(1000001, 0);
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v1[x]++;
    }

    for(int i=1; i<=1000000; i++) {
        for(int j=i; j<=1000000; j+=i) {
            ans[i]+=v1[j];
        }
    }

    for(int i=1000000; i>=1; i--) {
        if(ans[i]>=2) {
            cout << i << endl;
            return 0;
        }
    }
}