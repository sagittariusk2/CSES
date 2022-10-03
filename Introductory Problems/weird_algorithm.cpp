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
    int n;
    cin>>n;
    cout<<n<<" ";
    while (n!=1) {
        if(n%2==0) {
            n /= 2;
        }
        else n = (n*3)+1;
        cout<<n<<" ";
    }
}