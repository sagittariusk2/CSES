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
    /*int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        vector<pair<int, int>> v1;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            v1.emplace_back(a[i], i+1);
        }
 
        sort(v1.begin(), v1.end());
        for(int i=0; i<n; i++) {
            int h=v1.rbegin()->second;
            for(auto j=v1.rbegin(); j!=v1.rend(); j++) {
                if(j->second)
            }
        }
 
        cout<<"-------\n";
        for(auto item:v1)
            cout<<item.first<<" "<<item.second<<"\n";
    }*/
 
    int n;
    cin>>n;
    if(n%4==1 || n%4==2) cout<<"NO\n";
    else {
        cout<<"YES\n";
        set<int> s1, s2;
        while(n>=1) {
            if(n==3) {
                s1.insert(1);
                s1.insert(2);
                s2.insert(3);
                n=0;
            }
            else {
                s1.insert(n);
                s1.insert(n-3);
                s2.insert(n-2);
                s2.insert(n-1);
                n -= 4;
            }
        }
        cout<<s1.size()<<"\n";
        for(auto item:s1)
            cout<<item<<" ";
        cout<<"\n"<<s2.size()<<"\n";
        for(auto item:s2)
            cout<<item<<" ";
    }
}