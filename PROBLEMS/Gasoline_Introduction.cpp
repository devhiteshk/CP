#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int sum = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int total = arr[0];

        int curr = 1;
        int count = 0;

        if (arr[0] == 0)
        {
            std::cout << 0 << std::endl;
        }
        else
        {
            while (total > 0)
            {
                total -= 1;
                count += 1;

                if (arr[curr] == 0 && total == 0 || count == n)
                {
                    break;
                }
                else
                {
                    total += arr[curr];
                }
                curr += 1;
            }
            std::cout << count + total << std::endl;
        }
    }
    return 0;
}