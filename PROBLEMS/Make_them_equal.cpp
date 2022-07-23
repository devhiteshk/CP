#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int n;
        cin >> n;
        int arr[n];
        int maxA = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxA = max(arr[i], maxA);
        }
        int minA = 999999;
        for (int i = 0; i < n; i++)
        {
            minA = min(arr[i], minA);
        }

        std::cout << maxA - minA << std::endl;
    }
    return 0;
}