/**
 * @file restaurant_customers
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-13
 * @time 00:52
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    vector<pair<int, int>> nums;
    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        nums.emplace_back(b, a);
    }
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++) {
        swap(nums[i].first, nums[i].second);
    }
    sort(nums.begin(), nums.end());
    int ans=1, s=nums[0].first, e=nums[0].second, f_ans=1;
    for(int i=1; i<n; i++) {
        if(nums[i].first>e) {
            s = nums[i].first;
            e = nums[i].second;
            f_ans = max(f_ans, ans);
            ans=1;
        } else {
            e= min(e, nums[i].second);
            ans++;
        }
    }
    f_ans = max(f_ans, ans);
    cout << f_ans << endl;
}