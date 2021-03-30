//
//  main.cpp
//  7_NotSoEasyMath
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
#define s_bits __builtin_popcountll    //
#define t_z __builtin_ctzll   //
#define l_z __builtin_clzll   //
#define lb lower_bound
#define ub upper_bound
#define inf INT_MAX
#define MOD 1000000007
#define fr(i,a,b) for(auto i = a; i < b; i++)
#define tr(it,a,b) for(auto it = a; it != b; it++)
using namespace std;


/*####*/


//Program


ll solve(ll n){
    
    ll base[] = {2,3,5,7,11,13,17,19};
    ll count = 0;
    ll curr;
    fr(mask,1,(1<<8)){
        curr = 1;
        fr(j,0,8) curr *= (((1<<j)&mask)?base[j]:1);
        count += ((s_bits(mask))&1?n/curr:-n/curr);
    }
    return count;
}

int main(){
    ll t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}
