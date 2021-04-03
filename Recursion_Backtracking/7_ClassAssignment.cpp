//
//  main.cpp
//  7_ClassAssignment
//
//  Created by Anshuman Raj Chauhan on 03/04/21.
//

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
#define ll long long //
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

ll dp[27][2];

ll count(ll n, ll par){
    if(n == 1) return (par == 1?1:2);
    if(dp[n][par] != -1) return dp[n][par];
    return dp[n][par] = count(n-1,0) + (par!=1?count(n-1,1):0);
}
// a->0; b->1;
ll solve(ll n){
    ll ans = count(n,0);
    return ans;
}

int main(){
    ll t,n;
    memset(dp,-1,sizeof dp);
    cin >> t;
    ll tc = 1;
    while(t--){
        cin >> n;
        cout << "#" << tc++ << " : " << solve(n) << "\n";
    }
    return 0;
}
