#include<iostream>
#include<map>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;


map<long, long> prime_fac(long n)
{
    map<long, long> factors;
	long count;
    while (n % 2 == 0)
    {
		if (factors.find(2) == factors.end())
			factors.insert(make_pair(2, 1));
		else
			(factors.find(2))->second++;
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
			if (factors.find(i) == factors.end())
				factors.insert(make_pair(i, 1));
			else
				(factors.find(i))->second++;
            n = n/i;
        }
    }

    if (n > 2)
		if (factors.find(n) == factors.end())
			factors.insert(make_pair(n, 1));
		else
			(factors.find(n))->second++;
	return factors;
}
/*
map<long, long> prime_fac(long k)
{
	map<long, long> factors;
	long i = 1, j, count;
	while (i <= k)
	{
		count = 0;
		if(k % i == 0)
		{
			j = 1;
			while(j <= i)
			{
				if(i % j == 0)
				{
					count++;
				}
				if (count == 3)
					break;
				j++;
			}
			if(count == 2)
			{
				if (factors.find(i) == factors.end())
					factors.insert(make_pair(i, 1));
				else
					(factors.find(i))->second++;
				k /= i;
				i = 0;
			}
		}
		i++;
	}
	return factors;
}*/
int main() {
	int t;
	long n, k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		map<long, long> factors = prime_fac(k);
		int x = INT_MAX;
		for(auto iter = factors.begin(); iter != factors.end(); iter++)
		{
			//cout<<iter->first<<" "<<iter->second<<"\t";
			long fac = iter->first, factors_in_factorial = 0;
			//long ratio = n/fac;
			while(n/fac > 0)
			{
				//cout<<factors_in_factorial<<" ";
				factors_in_factorial += n/fac;
				fac *= iter->first;
			}
			if(x > factors_in_factorial / iter->second)
				x = factors_in_factorial / iter->second;
		}
		cout<<x<<endl;
	}
	return 0;
}
