/**
 * @file counting_coprime_pairs
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-08-15
 * @time 12:33
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
#define N 1000001
using namespace std;

signed main() {
    int n, x;
    cin >> n;
    vector<int> nums(N, 0), gcd(N);
    for(int i=0; i<n; i++) {
        cin >> x;
        nums[x]++;
    }

    for(int i=1; i<=N; i++) {
        x = 0;
        for(int j=i; j<=N; j += i) {
            x += nums[j];
        }
        gcd[i] = (x*(x-1))/2;
    }

    for(int i=N; i>=1; i--) {
        x=0;
        for(int j=2*i; j<=N; j+=i) {
            x += gcd[j];
        }
        gcd[i]-=x;
    }

    cout << gcd[1] << endl;
}