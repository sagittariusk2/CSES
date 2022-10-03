/**
 * @file maximum_subarray_sum
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-14
 * @time 15:17
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    //code here
    int n, a;
    cin >> n;
    int curr_ans = 0, ans=INT_MIN;
    for(int i=0; i<n; i++) {
        cin >> a;
        if(i==0) curr_ans = a;
        else if(curr_ans+a<=a) {
            curr_ans = a;
        } else {
            curr_ans += a;
        }
        ans = max(ans, curr_ans);
    }
    cout << ans << endl;
}