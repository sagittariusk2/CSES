/**
 * @file stick_length
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-14
 * @time 16:02
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    //code here
    int n, x, sum=0;
    cin >> n;
    vector<int> v1(n);
    for(int i=0; i<n; i++) {
        cin >> v1[i];
        sum += v1[i];
    }
    x = sum/n;
    int ans1=0, ans2=0, ans3=0;
    for(int i=0; i<n; i++) {
        ans1 += abs(v1[i]-x);
        ans2 += abs(x+1-v1[i]);
        ans2 += abs(x-1-v1[i]);
    }
    cout << min(ans3, min(ans1, ans2)) << endl;
}