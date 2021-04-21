#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int num;
    cin >> num;

    int len = log10(num) + 1;

    int rank = 0, i = 0;

    //calculating no. of lucky numbers smaller than num is possible of same length as of num
    while (num)
    {
    	if (num&1)
    	{
    		rank += (1<<i);
    	}

    	i++;

    	num /= 10;
    }

    //calculating no. of numbers possible of smaller lengths
    rank += ((1<<len) - 2);

    cout << rank + 1 << endl;

	return 0;
}