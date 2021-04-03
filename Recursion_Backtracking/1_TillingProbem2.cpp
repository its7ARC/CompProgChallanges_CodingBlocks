//
//  main.cpp
//  1_TillingProblem2
//
//  Created by Anshuman Raj Chauhan on 02/04/21.
//

//Tilling Problem

//inclusions
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <list>
#include <limits.h>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>
#include <climits>

//macros
#define ll int  //
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define ff first
#define ss second
#define ii pair<ll,ll>
#define vi vector<ll>
#define vii vector<pair<ll,ll>>
#define vvi vector<vector<ll>>
#define res reserve
#define mii map<ll,ll>
#define umii unordered_map<ll,ll>
#define u_map unordered_map
#define s_bits __builtin_popcount    //
#define t_z __builtin_ctz   //
#define l_z __builtin_clz   //
#define lb lower_bound
#define ub upper_bound
#define inf INT_MAX
#define MOD 1000000007
#define fr(i,a,b) for(auto i = a; i < b; i++)
#define tr(it,a,b) for(auto (it) = (a); (it) != (b);)
using namespace std;



/*####*/


//Program

ll m;
ll dp[100005];

ll count(ll r){
    if(r < 0) return 0;
    if(r == 0) return 1;
    if(dp[r] != -1) return dp[r];
    return dp[r] = (count(r-m)%MOD + count(r-1)%MOD)%MOD;
}

ll solve(ll r){
    memset(dp,-1,sizeof dp);
    ll ans = count(r);
    return ans;
}

int main(){
    ll t,n;
    cin >> t;
    while(t--){
        cin >> n >> m;
        cout << solve(n) << "\n";
    }
    return 0;
}

