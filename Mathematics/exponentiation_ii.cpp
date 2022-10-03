/**
 * @file exponentiation_ii
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-08-23
 * @time 13:01
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

int power(int a, int b, int M) {
    if(b==0) return 1;
    int x = power(a, b/2, M);
    if(b%2==1) return ((((x%M)*(x%M))%M)*a)%M;
    return ((x%M)*(x%M))%M;
}

template<typename... T>
void see(T&... args) {
    ((cin >> args), ...);
}

signed main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        int M=1000000007;
        see(a,b,c);
        cout << power(a, power(b, c, M-1), M) << endl;
    }
}