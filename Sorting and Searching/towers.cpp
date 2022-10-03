/**
 * @file towers
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-22
 * @time 18:41
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
    vector<int> ans;
    for(auto i:v1) {
        int x = upper_bound(ans.begin(), ans.end(), i)-ans.begin();
        if(x==ans.size()) ans.push_back(i);
        else ans[x] = i;
    }
    cout << ans.size() << endl;
}