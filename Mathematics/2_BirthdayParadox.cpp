#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float p, prob = 1.;
	int i = 1;
	cin>>p;
	if(p == 0.)
	{
		cout<<1;
		return 0;
	}
	if(p == 1.)
	{
		cout<<366;
		return 0;
	}
	while((1-prob) <= p)
	{
		i++;
		prob *= float(365 - i)/365;
	}
	cout<<++i;
	return 0;
}
