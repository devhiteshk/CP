#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[11];

        for (int i = 1; i <= 10; i++)
        {
            cin >> arr[i];
        }

        int k;
        cin >> k;

        for (int i = 10; i > 0; i--)
        {
            int temp = min(arr[i], k);
            arr[i] -= temp;
            k -= temp;
        }

        for (int i = 10; i > 0; i--)
        {
            if (arr[i] != 0)
            {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}