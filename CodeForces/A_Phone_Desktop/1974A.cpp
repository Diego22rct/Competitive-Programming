#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t;

    cin >> t;

    while (t--)
    {
        size_t x, y;
        cin >> x >> y;

        size_t screens_for_2x2 = (y + 1) / 2;

        size_t remaining_cells = (y % 2) * 4;

        remaining_cells += screens_for_2x2 * 7;

        if (remaining_cells >= x)
        {
            cout << screens_for_2x2 << endl;
        }
        else
        {
            x -= remaining_cells;
            size_t screens_for_1x1 = (x + 14) / 15;
            cout << screens_for_2x2 + screens_for_1x1 << endl;
        }
    }

    return 0;
}