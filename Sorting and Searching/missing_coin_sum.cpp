/**
 * @file missing_coin_sum
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-21
 * @time 22:32
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
    sort(v1.begin(), v1.end());

    int ans = 0;
    for(auto i:v1) {
        if(i>ans+1) {
            break;
        }
        ans += i;
    }
    ans++;
    cout << ans << endl;
}