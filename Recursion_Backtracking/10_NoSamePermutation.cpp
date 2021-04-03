//
//  main.cpp
//  10_NoSamePermutation
//
//  Created by Anshuman Raj Chauhan on 03/04/21.
//

//10_ No same permutation

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



/*####*/

//Program

void recur(ll n, vi perm, mii cnt){
    if(n == 0){
        fr(i,0,perm.size()) cout << perm[i] << " ";
        cout << "\n"; return;
    }
    tr(it,cnt.begin(),cnt.end()){
        auto curr = it++;
        perm.pb(curr->ff); curr->ss--;
        if(curr->ss == 0) cnt.erase(curr);
        recur(n-1,perm,cnt); cnt[*perm.rbegin()]++ ; perm.ppb();
    }
    return;
}


void solve(vi v){
    //count of ints
    mii cnt;
    ll n = ll(v.size());
    fr(i,0,n) cnt[v[i]]++;
    vi perm;
    recur(n,perm,cnt);
}

int main(){
    ll n;
    cin >> n;
    vi v = in(n,0);
    solve(v);
    return 0;
}
