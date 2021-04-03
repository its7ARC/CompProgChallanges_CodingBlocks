//
//  main.cpp
//  3_BinaryStrings
//
//  Created by Anshuman Raj Chauhan on 02/04/21.
//

//3_Binary Strings

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
#define ll long long  //
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
#define lb lower_bound
#define ub upper_bound
#define inf INT_MAX
#define MOD 1000000007
#define fr(i,a,b) for(auto i = a; i < b; i++)
#define tr(it,a,b) for(auto (it) = (a); (it) != (b);)
using namespace std;


/*####*/


//Program

ll dp[95][2];

ll count(ll n, ll par){
    if(n == 1) return (par == 1?1:2);
    if(dp[n][par] != -1) return dp[n][par];
    return dp[n][par] = count(n-1,0) + (par == 1?0:count(n-1,1));
}

ll solve(ll n){
    string s;
    ll ans = count(n,0);
    return ans;
}

int main(){
    ll t,n;
    cin >> t;
    memset(dp,-1,sizeof dp);
    while(t--){
        cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}
