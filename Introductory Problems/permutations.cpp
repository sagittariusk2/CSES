/**
 * @file permutations
 * @author Ritesh Ranjan (https://sagittariusk2.github.io/)
 * @id sagittarius_k2
 * @brief brief description
 * @version 0.1 
 * @date 2022-10-03
 * @time 19:06
 * @link https://cses.fi/problemset/task/1070/
 * @copyright Copyright (c) 2022
 */


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, ans=0;
    cin>>n;
    if(n==1) cout<<"1";
    else if(n<=3) cout<<"NO SOLUTION";
    else {
        if(n==4) cout<<"2 4 1 3";
        else {
            for(int i=1; i<=n; i += 2)
                cout<<i<<" ";
            for(int i=2; i<=n; i+=2)
                cout<<i<<" ";
        }
    }
}