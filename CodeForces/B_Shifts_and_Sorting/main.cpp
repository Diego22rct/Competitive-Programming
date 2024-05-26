#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    size_t t;
    cin >> t;

    while (t--)
    {
        string binaryArr;
        long long cost = 0, total = 0;
        cin >> binaryArr;

        for (int i = 0; i < binaryArr.size(); ++i)
        {
            if (binaryArr[i] == '1')
            {
                ++cost;
            }
            else if (cost)
            {
                total += (cost + 1);
            }
        }
        cout << total << endl;
    }

    return 0;
}