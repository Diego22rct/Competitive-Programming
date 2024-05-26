#include <bits/stdc++.h>
using namespace std;

size_t gcd(size_t a, size_t b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    size_t t;
    cin >> t;
    while (t--)
    {
        size_t x;
        cin >> x;

        size_t gcdMax = 0;
        size_t bestY = 0;

        if (x == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (x == 2)
        {
            cout << 1 << endl;
            continue;
        }

        for (size_t y = 1; x > y; ++y)
        {
            size_t tempGcd = gcd(x - y, y) + y;
            if (gcdMax < tempGcd)
            {
                gcdMax = tempGcd;
                bestY = y;
            }
        }
        cout << bestY << endl;
    }
    return 0;
}