/**
 * @file sum_of_divisors
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-08-23
 * @time 13:57
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
#define M 1000000007
using namespace std;

int power(int n, int m) {
    if(m==0) return 1;
    int x = power(n, m/2);
    if(m%2) return (((x*x)%M)*n)%M;
    return (x*x)%M;
}

signed main() {
    int n;
    cin >> n;
    int ans= 0;
    int x = sqrt(n);
    int c = power(2, M-2);
    for(int i=1; i<=x; i++) {
        int y = n/i;
        ans = (ans+(y*i)%M)%M;
        // x+1 -> y
        ans = (ans + ((((y%M*(y+1)%M)%M)*c)%M)+M-(((x+1)*x)/2)%M)%M;
    }

    cout << ans << endl;
}