/**
 * @file sum-of_two_values
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-09-12
 * @time 23:38
 * @link link
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> nums;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        nums.emplace_back(a, i+1);
    }
    sort(nums.begin(), nums.end());
    int i=0, j=n-1;
    while(i<j) {
        if(nums[i].first+nums[j].first==x) {
            break;
        } else if(nums[i].first+nums[j].first<x) {
            i++;
        } else {
            j--;
        }
    }
    if(i<j) {
        cout << nums[i].second << " " << nums[j].second << endl;
    } else {
        cout << "IMPOSSIBLE\n";
    }
}