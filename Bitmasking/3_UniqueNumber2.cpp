#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], xor1 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        xor1 = (xor1 ^ a[i]);
    }

    int pos = log2(xor1&-xor1);

    int mask = (1 << pos), first = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]&mask)
            first = (first^a[i]);
    }

    int second = xor1 ^ first;

    cout << min(first, second) << " " << max(first, second) << endl;

    return 0;
}