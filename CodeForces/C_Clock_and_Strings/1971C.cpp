#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);

    size_t t;
    cin >> t;

    while (t--)
    {
        size_t a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > b)
            swap(a, b);
        if (c > d)
            swap(c, d);

        if ((a < c && c < b && b < d) || (c < a && a < d && d < b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
