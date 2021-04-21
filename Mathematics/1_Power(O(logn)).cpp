#include<iostream>
using namespace std;
long pow(int n, int p)
{
	if(p == 0)
		return 1;
	if(p&1)
		return pow(n, (p-1)/2) * n * pow(n, (p-1)/2);
	else
		return pow(n, p/2) * pow(n, p/2);
}
int main() {
	int n, p;
	cin>>n>>p;
	cout<<pow(n,p);
	return 0;
}