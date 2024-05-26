/*
 * A. Two Friends
 * https://codeforces.com/problemset/problem/1969/A
 */
using namespace std;
#include <bits/stdc++.h>

#define l long

// number of cases 1≤t≤5000
l t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t--)
    {
        int ans = 3;
        // the first line contains one integer n (2≤n≤50) — the number of friends;
        int f;
        cin >> f;
        // the second line contains n integers p1, p2,…, pn (1≤pi≤n; pi≠i; all pi are distinct).
        int p[f];
        for (int i = 1; i <= f; i++)
        {
            cin >> p[i];
        }

        for (int i = 1; i <= f; i++)
        {
            if (p[p[i]] == i)
            {
                ans = 2;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}