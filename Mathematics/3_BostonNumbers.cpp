#include<iostream>
using namespace std;

unsigned digit_sum(unsigned i)
{
	unsigned sum = 0;
	while(i)
	{
		sum += i%10;
		i = i/10;
	}
	return sum;
}
int main() {
	unsigned n, i = 1, j, count, sum = 0;
	cin>>n;
	unsigned temp = n, flag = 0;
	for(unsigned i = 2; i < n / 2; i++)
	{
		if(n % i == 0)
		{  flag = 1;   break;  }
	}
	if (flag)
	{
		while (i <= n )
		{
			count = 0;
			if(n % i == 0)
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
					sum += digit_sum(i);
					n /= i;
					i = 0;
				}
			}
			i++;
		}
		if(sum == digit_sum(temp))
			cout<<1;
		else
			cout<<0;
	}
	else
		cout<<0;
	return 0;
}
