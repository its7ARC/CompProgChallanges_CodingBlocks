#include<iostream>
using namespace std;

#define ll unsigned long long

int main()
{
    int n, k;
    cin >> n;

    k = n;
    n *= 2;

    ll ans = 1;

    for (int i = 1; i <= k; i++)
    {
        ans = ans*n/i;

        n--;
    }

    cout << ans/(k+1);

    return 0;
}
