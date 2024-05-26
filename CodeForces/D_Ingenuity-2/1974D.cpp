#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t;
    cin >> t;

    while (t--)
    {
        size_t n;
        string s;
        cin >> n >> s;

        int rover_x = 0, rover_y = 0;
        int heli_x = 0, heli_y = 0;
        string p(n, 'R');

        // Check for invalid cases (length 2 with different characters)
        if (s.size() <= 2 && s[0] != s[1])
        {
            cout << "NO" << endl;
            continue;
        }

        // Calculate initial positions
        for (int j = 0; j < n; ++j)
        {
            if (s[j] == 'N')
            {
                rover_y++;
            }
            else if (s[j] == 'S')
            {
                rover_y--;
            }
            else if (s[j] == 'E')
            {
                rover_x++;
            }
            else if (s[j] == 'W')
            {
                rover_x--;
            }
        }

        // Balance positions (assign 'H' to instructions that move helicopter closer)
        for (int j = 0; j < n; ++j)
        {
            if (s[j] == 'N')
            {
                if (rover_y > heli_y)
                {
                    rover_y--;
                    heli_y++;
                    p[j] = 'H';
                }
            }
            else if (s[j] == 'S')
            {
                if (rover_y < heli_y)
                {
                    rover_y++;
                    heli_y--;
                    p[j] = 'H';
                }
            }
            else if (s[j] == 'E')
            {
                if (rover_x > heli_x)
                {
                    rover_x--;
                    heli_x++;
                    p[j] = 'H';
                }
            }
            else if (s[j] == 'W')
            {
                if (rover_x < heli_x)
                {
                    rover_x++;
                    heli_x--;
                    p[j] = 'H';
                }
            }
        }

        // Directly move the helicopter towards the final position
        for (int j = 0; j < n; ++j)
        {
            if (p[j] == 'H')
            {
                if (heli_x > rover_x)
                {
                    heli_x--;
                }
                else if (heli_x < rover_x)
                {
                    heli_x++;
                }
                else if (heli_y > rover_y)
                {
                    heli_y--;
                }
                else if (heli_y < rover_y)
                {
                    heli_y++;
                }
            }
        }

        if (rover_x == heli_x && rover_y == heli_y)
        {
            cout << p << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
