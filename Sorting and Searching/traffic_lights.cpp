/**
 * @file traffic_lights
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-22
 * @time 18:51
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    //code here
    int x, n, a;
    cin >> x >> n;
    set<int> s1;
    s1.insert(0);
    s1.insert(x);
    multiset<int> ms1;
    ms1.insert(x);
    for(int i=0; i<n; i++) {
        cin >> a;
        auto j = s1.upper_bound(a);
        int j1=*j;
        j--;
        int k1 = *j;
        ms1.erase(ms1.find(j1-k1));
        ms1.insert(j1-a);
        ms1.insert(a-k1);
        s1.insert(a);
        cout << *ms1.rbegin() << endl;
    }
}