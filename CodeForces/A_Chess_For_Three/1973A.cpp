#include <bits/stdc++.h>

using namespace std;

#define l long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        int total_points = p1 + p2 + p3;

        // Check if the sum of the points is even
        if (total_points % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int total_games = total_points / 2;

        // Check if the sum of the two smallest scores is at least the largest score
        if (p1 + p2 < p3)
        {
            cout << total_games - p1 << endl;
            continue;
        }
        // Calculate the number of draws
        int max_draws = total_games - max({p1, p2, p3});

        cout << max_draws << endl;
    }

    return 0;
}