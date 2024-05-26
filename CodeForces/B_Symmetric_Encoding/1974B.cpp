#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t;

    cin >> t;
    while (t--)
    {
        size_t n;
        string b;

        cin >> n >> b;

        set<char> unique_c(b.begin(), b.end());
        string sToDecode(unique_c.begin(), unique_c.end());

        unordered_map<char, char> char_map;
        int len = sToDecode.size();
        for (int i = 0; i < len; ++i)
        {
            char_map[sToDecode[i]] = sToDecode[len - 1 - i];
        }

        string reconstruido;
        for (char ch : b)
        {
            reconstruido += char_map[ch];
        }

        cout << reconstruido << endl;
    }
    return 0;
}