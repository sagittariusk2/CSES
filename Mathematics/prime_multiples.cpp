/**
 * @file prime_multiples
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-08-16
 * @time 01:56
 * @link https://cses.fi/problemset/task/2185
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

int mul(int a, int b, int n) {
    if(a==-1 or b==-1) return -1;
    string s1 = to_string(a);
    string s2 = to_string(b);
    string ans = "";
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    for(int i=0; i<s1.size(); i++) {
        int c = 0;
        string tmp = "";
        for(auto j:s2) {
            int x = s1[i]-'0';
            int y = j-'0';
            int z = (x*y)+c;
            tmp += to_string(z%10);
            c = z/10;
        }
        if(c!=0) tmp += c+'0';
        if(ans=="") ans=tmp;
        else {
            c = 0;
            for(int j=0; j<tmp.size(); j++) {
                int x = tmp[j]-'0';
                if(j+i>=ans.size()) {
                    int z = x+c;
                    ans += to_string(z%10);
                    c = z/10;
                } else {
                    int y = ans[j+i]-'0';
                    int z = x+y+c;
                    ans [j+i] = (z%10)+'0';
                    c = z/10;
                }
            }
            if(c!=0) ans += c+'0';
        }
    }

    reverse(ans.begin(), ans.end());
    if(ans.size()<to_string(n).size()) return stoll(ans);
    else if(ans.size()>to_string(n).size()) return -1;
    else {
        if(ans<=to_string(n)) return stoll(ans);
        else return -1;
    }
}

signed main() {
    int n, k, ans=0;
    cin >> n >> k;
    vector<int> nums(k);
    for(int i=0; i<k; i++) {
        cin >> nums[i];
    }

    int m = 1<<k;
    vector<int> a(m, 1);
    for(int i=1; i<m; i++) {
        int x = log2(i);
        int y = i-(1<<x);
        if(a[y]!=-1) {
            a[i] = mul(nums[x], a[y], n);
            if(a[i]!=-1) {
                if(y==0) {
                    ans += (n/a[i]);
                } else {
                    ans -= (n/a[i]);
                }
            }
        } else {
            a[i]=-1;
        }
    }
    cout << ans << endl;
}