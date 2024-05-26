#include <bits/stdc++.h>

using namespace std;

int maxPolygons(vector<int> &sticks)
{
    int max_polygons = 0;
    map<int, int> freq;

    for (int stick : sticks)
    {
        freq[stick]++;
    }

    for (int sides = 3; sides <= sticks.size(); ++sides)
    {
        int polygons = 0;
        for (auto &entry : freq)
        {
            polygons += entry.second / sides;
        }
        max_polygons = max(max_polygons, polygons);
    }
    return max_polygons;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> sticks(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> sticks[i];
        }
        cout << maxPolygons(sticks) << endl;
    }
    return 0;
}