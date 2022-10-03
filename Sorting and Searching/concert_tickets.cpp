/**
 * @file concert_tickets
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-23
 * @time 15:21
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    //code here
    int n, m, a;
    cin >> n >> m;
    multiset<int> v1;
    for(int i=0; i<n; i++) {
        cin >> a;
        v1.insert(a);
    }
    while(m--) {
        int x;
        cin >> x;
        auto i = v1.upper_bound(x);
        if(i==v1.begin()) {
            cout << -1 << endl;
        } else {
            i--;
            cout << *i << endl;
            v1.erase(i);
        }
    }

}