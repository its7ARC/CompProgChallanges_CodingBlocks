//
//  main.cpp
//  7_FunkyChessBoard
//
//  Created by Anshuman Raj Chauhan on 02/04/21.
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
vvi board, cover;

void move(ll r, ll c){
    ll code = 0;
    cover[r][c] = 1;
    if(r-2 >= 0 && c-1 >= 0 && board[r-2][c-1] == 1 && cover[r-2][c-1] == 0){ move(r-2,c-1); code = 1;}
    if(r-2 >= 0 && c+1 < n && board[r-2][c+1] == 1 && cover[r-2][c+1] == 0){ move(r-2,c+1); code = 1;}
    if(r-1 >= 0 && c-2 >= 0 && board[r-1][c-2] == 1 && cover[r-1][c-2] == 0){ move(r-1,c-2); code = 1;}
    if(r-1 >= 0 && c+2 < n && board[r-1][c+2] == 1 && cover[r-1][c+2] == 0){ move(r-1,c+2); code = 1;}
    if(r+1 < n && c-2 >= 0 && board[r+1][c-2] == 1 && cover[r+1][c-2] == 0){ move(r+1,c-2); code = 1;}
    if(r+1 < n && c+2 < n && board[r+1][c+2] == 1 && cover[r+1][c+2] == 0){ move(r+1,c+2); code = 1;}
    if(r+2 < n && c-1 >= 0 && board[r+2][c-1] == 1 && cover[r+2][c-1] == 0){ move(r+2,c-1); code = 1;}
    if(r+2 < n && c+1 < n && board[r+2][c+1] == 1 && cover[r+2][c+1] == 0){ move(r+2,c+1); code = 1;}
    
    if(!code) return;
    
}

ll solve(){
    cover = vect2D(n,n,0);
    move(0,0);
    ll count = 0;
    return count;
}

int main(){
    cin >> n;
    board = in<ll>(n,n,0);
    cout << solve() << "\n";
    return 0;
}
