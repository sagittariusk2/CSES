/**
 * @file Apartments.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> app(n), appartment(m);
    for(int i=0; i<n; i++) {
        cin >> app[i];
    }
    for(int i=0; i<m; i++) {
        cin >> appartment[i];
    }
    sort(app.begin(), app.end());
    sort(appartment.begin(), appartment.end());
    int i=0, j=0, ans=0;
    while(i<n and j<m) {
        if(app[i]-k<=appartment[j] and app[i]+k>=appartment[j]) {
            ans++;
            i++;
            j++;
        } else if(app[i]-k>appartment[j]) {
            j++;
        } else {
            i++;
        }
    }
    cout << ans << endl;
}