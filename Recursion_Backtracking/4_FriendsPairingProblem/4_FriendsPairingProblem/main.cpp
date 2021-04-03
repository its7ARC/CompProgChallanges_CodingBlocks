//
//  main.cpp
//  4_FriendsPairingProblem
//
//  Created by Anshuman Raj Chauhan on 02/04/21.
//

//Friends Pairing Problem

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


//2D array
template<class T = ll>
vector<vector<T>> vect2D(ll r, ll c, T k){
    vector<vector<T>> v(r, vector<T>(c,k));
    return v;
}

//input2DArray
template<class T = ll>
vector<vector<T>> in(ll r, ll c, ll key){
    vector<vector<T>> v(r+key, vector<T>(c+key));
    for(ll i = key; i < r+key; i++){
        for(ll j = key; j < c+key; j++){
            cin >> v[i][j];
        }
    }
    return v;
}

//inputArray
template<class T = ll>
vector<T> in(ll n, ll key){
    vector<T> a(n + key);
    for(ll i = key; i < n+key; i++){
        cin >> a[i];
    }
    return a;
}

/*####*/


//Program

ll dp[32];

ll count(ll n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(dp[n] != -1) return dp[n];
    return count(n-1);
}


ll solve(ll n){
    ll ans = count(n);
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

