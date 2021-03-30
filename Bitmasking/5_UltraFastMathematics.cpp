//
//  main.cpp
//  5_UltraFastMathematics
//
//  Created by Anshuman Raj Chauhan on 30/03/21.
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
#define tr(it,a,b) for(auto it = a; it != b; it++)
using namespace std;

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

vi solve(string s1, string s2){
    vi a,b;
    ll n = ll(s1.length());
    fr(i,0,n){
        a.pb(s1[i]-'0'); b.pb(s2[i]-'0');
    }
    vi ans;
    fr(i,0,n) ans.pb(a[i]^b[i]);
    
    return ans;
}

int main(){
    ll t;
    string a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        vi ans = solve(a,b);
        fr(i,0,ll(a.length())) cout << ans[i];
        cout << "\n";
    }
    return 0;
}
