//
//  main.cpp
//  11_SumItUp
//
//  Created by Anshuman Raj Chauhan on 03/04/21.
//

//11_Sum It Up

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

ll n;
vi a;

void disp(vi v){
    fr(i,0,ll(v.size())) cout << v[i] << " ";
    cout << "\n";
}

void recur(ll pos, ll t, vi perm){
    if(pos == n) return;
    if(t == 0){ disp(perm); return;}
    
    perm.pb(a[pos]); recur(pos+1,t-a[pos],perm); perm.ppb();
    recur(pos+1,t,perm);
    
    return;
}

void solve(ll n, ll t){
    if(t == 0 || n == 0) return;
    vi perm;
    sort(a.begin(),a.end());
    recur(0,t,perm);
}

int main(){
    ll t;
    cin >> n;
    a = in(n,0);
    cin >> t;
    solve(n,t);
    
    return 0;
}
