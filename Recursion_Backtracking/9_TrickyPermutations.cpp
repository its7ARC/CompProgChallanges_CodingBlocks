//
//  main.cpp
//  TrickyPermutations
//
//  Created by Anshuman Raj Chauhan on 03/04/21.
//

//9_Tricky Permutation

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
#define s_bits __builtin_popcnt    //
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

void recur(ll n, string s, map<char,ll> cnt){
    if(n == 0){ cout << s << "\n"; return;}
    tr(it,cnt.begin(),cnt.end()){
        auto curr = it++;
        s.pb(curr->ff); curr->ss--;
        if(curr->ss == 0) cnt.erase(curr);
        recur(n-1,s,cnt); cnt[s.back()]++ ; s.ppb();
    }
    return;
}


void solve(string s){
    //count of chars
    map<char,ll> cnt;
    ll n = ll(s.length());
    fr(i,0,n) cnt[s[i]]++;
    string str;
    recur(n,str,cnt);
}

int main(){
    string s;
    cin >> s;
    solve(s);
    return 0;
}
