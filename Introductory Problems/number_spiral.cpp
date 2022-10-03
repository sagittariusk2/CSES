/**
 * @file number_spiral
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-10-03
 * @time 16:41
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
    while (n--) {
        int x, y;
        cin >> x >> y;
        if(x==y) {
            cout << ((x-1)*(x-1))+(x) << endl;
        } else if(x>y) {
            if(x%2==0) {
                cout << (x*x)-(y-1) << endl;
            } else {
                cout << ((x-1)*(x-1))+y << endl;
            }
        } else {
            if(y%2) {
                cout << (y*y)-(x-1) << endl;
            } else {
                cout << ((y-1)*(y-1))+x << endl;
            }
        }
    }
}