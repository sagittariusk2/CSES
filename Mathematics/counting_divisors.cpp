/**
 * @file counting_divisors
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-08-16
 * @time 01:49
 * @link https://cses.fi/problemset/task/1713
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;
#define N 1000001

signed main() {
    int n;
    cin >> n;

    vector<int> divisors(N, 0);
    for(int i=1; i<=N; i++) {
        for(int j=i; j<=N; j+=i) {
            divisors[j]++;
        }
    }

    while(n--) {
        int x;
        cin >> x;
        cout << divisors[x] << endl;
    }
}