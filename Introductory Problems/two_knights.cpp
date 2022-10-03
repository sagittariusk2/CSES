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
 
string int_to_gray(int i, int n) {
    string s;
    int k=4;
    while(n--) {
        if (i % k >= (k - k / 4) || i % k < k / 4)
            s += '0';
        else
            s += '1';
        k *= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
 
signed main() {
    //int t;
    //cin>>t;
    //while(t--) {
        int n;
        cin>>n;
        for(int i=1; i<=n; i++) {
            if(i==1) cout<<"0\n";
            else if(i==2) cout<<"6\n";
            else if(i==3) cout<<"28\n";
            else {
                int x=((i-1)*5-3)*2;
                x += (i-4)*((i-1)*4-2);
                cout<<(i*i*(i*i-1))/2-x<<"\n";
            }
        }
    //}
}