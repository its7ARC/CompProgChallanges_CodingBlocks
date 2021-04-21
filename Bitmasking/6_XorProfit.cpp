#include<iostream>
#include<cmath>
using namespace std;
int main () {
	int x, y, ans = 0, i1 = -1, i2 = -1;
	int vec1[11] = {2}, vec2[11] = {2};
	cin>>x>>y;
	while(x)
	{
		++i1;
		vec1[i1] = x&1;
		x = x>>1;
	}
	while(y)
	{
		++i2;
		vec2[i2] = y&1;
		y = y>>1;
	} 
	if (i1 != i2)
		for (int i = 0; i <= i2; i++)
			ans += pow(2,i);
	else
		while(vec1[i1] == vec2[i1])
			i1--;
	if (!ans){
	for (int j = 0; j <= i1; j++)
		ans += pow(2,j);
	}
	cout<<ans;
	return 0;
}