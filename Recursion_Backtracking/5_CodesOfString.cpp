//
//  main.cpp
//  5_CodesOfString
//
//  Created by Anshuman Raj Chauhan on 02/04/21.
//

//6_Codes of string

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



/*####*/


//Program

ll len;
string n;
vector<string> str_list;

char int_char(string s){
    ll n = stoi(s);
    return char('a' + n - 1);
}

void recur(ll pos, string s){
    //base constraints
    if(pos > len) return;
    if(pos == len){str_list.pb(s); return;}
    
    //taking 1 chars
    s.pb(int_char(n.substr(pos,1))); recur(pos+1,s); s.ppb();
    
    //taking 2 chars
    if(pos+1 < len){
        ll dum = stoi(n.substr(pos,2));
        if(dum <= 26){ s.pb(int_char(n.substr(pos,2))); recur(pos+2,s);}
    }
}


void solve(){
    
    len = ll(n.length());
    string s;
    recur(0,s);
    
    //printing
    ll l_list = ll(str_list.size());
    cout << "[";
    fr(i,0,l_list) cout << str_list[i] << (i<l_list-1?", ":"");
    cout << "]\n";
    
}

int main(){
    cin >> n;
    solve();
    return 0;
}
