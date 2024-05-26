#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ans = 0;
        cin >> n;
        char arr[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (arr[i] == 'U')
            {
                ++ans;
            }
        }

        if (ans %= 2)
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
