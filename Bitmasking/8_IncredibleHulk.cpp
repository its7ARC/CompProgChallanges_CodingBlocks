#include<iostream>
using namespace std;
int main() {
	int t, n, min_steps;
	cin>>t; 
	while(t--)
	{
		cin>>n;
		cout<<__builtin_popcount(n)<<endl;
		
	}
	return 0;
}