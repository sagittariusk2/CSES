/*
    ----@sagittarius_k2-----
    Created by Ritesh Ranjan
*/
 
#define fio                          \
   ios_base::sync_with_stdio(false); \
   cin.tie(NULL);                    \
   cout.tie(NULL);
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cmath>
#include <bitset>
 
using namespace std;
 
#define int long long int
#define M 1000000007
 
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
 
int powerOf2(int n) {
    if(n==0) return 1;
    else {
        if(n%2==0)
            return (powerOf2(n/2)*powerOf2(n/2))%M;
        else return (powerOf2(n/2)*powerOf2(n/2)*2)%M;
    }
}
 
signed main() {
    int t;
    cin>>t;
    while(t--) {
        int a, x, b, y;
        cin>>a>>b;
        x=max(a, b);
        y=min(a, b);
        if(x>2*y) cout<<"NO\n";
        else if(x==2*y) cout<<"YES\n";
        else {
            if(((2*y)-x)%3!=0) cout<<"NO\n";
            else {
                if(((2*y)-x)/3>=0) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
}