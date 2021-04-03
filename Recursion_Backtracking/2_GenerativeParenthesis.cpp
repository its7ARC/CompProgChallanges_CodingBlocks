//
//  main.cpp
//  GenerativeParenthesis
//
//  Created by Anshuman Raj Chauhan on 02/04/21.
//

//Generative Paranthesis

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

void recur(ll open, ll close, string s){
    if(open > n || close > open) return;
    if(open == n && close == n) cout << s << "\n";
    s.pb(')'); recur(open,close+1,s); s.ppb();
    s.pb('('); recur(open+1,close,s); s.ppb();
}

void solve(){
    string s = "(";
    recur(1,0,s);
}

int main(){
    cin >> n;
    solve();
    return 0;
}
