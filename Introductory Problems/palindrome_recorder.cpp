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
    string s;
    cin>>s;
    int l[26]={0};
    int n=s.length();
    for(int i=0; i<n; i++)
        l[s[i]-65]++;
    int odd=0;
    for(int i=0; i<26; i++) {
        if(l[i]%2!=0) odd++;
    }
    if(odd>=2) cout<<"NO SOLUTION";
    else {
        string s1="", sm="";
        for(int i=0; i<26; i++) {
            if(l[i]%2==0) {
                for(int j=0; j<l[i]/2; j++)
                    s1 += (i+65);
            }
            else {
                for(int j=0; j<l[i]; j++)
                    sm += (i+65);
            }
        }
        cout<<s1<<sm;
        reverse(s1.begin(), s1.end());
        cout<<s1;
    }
}