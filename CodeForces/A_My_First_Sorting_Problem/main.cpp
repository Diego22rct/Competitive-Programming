#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int arr[n][2];

    int less = n;
    while (less != 0)
    {
        int a, b;
        std::cin >> a >> b;

        arr[n - less][0] = a;
        arr[n - less][1] = b;

        --less;
    }
    // Bubble sort
    for (int i = 0; i < n; ++i)
    {
        if (arr[i][0] > arr[i][1])
        {
            // Swap elements
            int temp = arr[i][0];
            arr[i][0] = arr[i][1];
            arr[i][1] = temp;
        }
    }
    // print sorted array
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i][0] << " " << arr[i][1] << std::endl;
    }
}