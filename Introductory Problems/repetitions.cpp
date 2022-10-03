/**
 * @file repetitions
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-10-03
 * @time 19:04
 * @link https://cses.fi/problemset/task/1069
 * @copyright Copyright (c) 2022
 */


#define fio                          \
   ios_base::sync_with_stdio(false); \
   cin.tie(NULL);                    \
   cout.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
bool sortBySec(const pair<int,int> &a, const pair<int,int> &b) {
    return (a.second < b.second);
}
 
int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
 
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
 
signed main() {
    string s;
    cin>>s;
    int n=s.length(), ans=0, count=0;
    for(int i=0; i<n; i++) {
        if(i==0) {
            count++;
        }
        else {
            if(s[i]!=s[i-1]) {
                ans=max(ans, count);
                count=1;
            }
            else count++;
        }
    }
    ans=max(ans, count);
    cout<<ans;
}