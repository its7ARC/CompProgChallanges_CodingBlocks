//
//  main.cpp
//  SetBits
//
//  Created by Anshuman Raj Chauhan on 29/03/21.
//

//Playing with bits

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

/*####*/


//Program

ll cumm_count[100005];

void cache(){
    cumm_count[0] = 0;
    fr(i,1,100005) cumm_count[i] = cumm_count[i-1] + s_bits(i);
    return;
}

ll solve(ll a, ll b){
    ll mx, mn;
    mx = max(a,b); mn = min(a,b);
    return cumm_count[mx] - (mn-1>=0?cumm_count[mn-1]:0);
}

int main(){
    ll q,a,b;
    cache();
    cin >> q;
    while(q--){
        cin >> a >> b;
        cout << solve(a,b) << "\n";
    }
    return 0;
}
