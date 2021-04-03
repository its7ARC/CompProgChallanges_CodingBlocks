//
//  main.cpp
//  8_SmartKeypad1
//
//  Created by Anshuman Raj Chauhan on 03/04/21.
//

//8_Smart Keypad

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
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void recur(ll pos, string s){
    if(pos == len){ cout << s << "\n"; return;}
    ll idx = n[pos] - '0';
    string curr = table[idx];
    fr(i,0,ll(curr.length())){
        s.pb(curr[i]); recur(pos+1,s); s.ppb();
    }
    return;
}

void solve(string n){
    len = ll(n.length());
    string s;
    recur(0,s);
    return;
}

int main(){
    cin >> n;
    solve(n);
    return 0;
}
