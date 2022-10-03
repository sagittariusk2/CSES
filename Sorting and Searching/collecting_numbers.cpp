/**
 * @file collecting_numbers
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-21
 * @time 23:37
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    //code here
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int i=0; i<n; i++) {
        cin >> v1[i];
    }
    set<int> s1;
    for(auto i:v1) {
        if(s1.find(i-1)==s1.end()) {
            s1.insert(i);
        } else {
            s1.erase(i-1);
            s1.insert(i);
        }
    }
    cout << s1.size() << endl;
}