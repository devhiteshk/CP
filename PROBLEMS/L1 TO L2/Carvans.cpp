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
        cin>>n;
        int arr[n];
        for (int i=0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        int currMin = arr[0];

        if (arr[0] > 0)
            {
                count += 1;
                currMin = arr[0];
            }

        for (int i = 1; i < n; i++)
        {   
            if (arr[i] < currMin)
            {
                count += 1;
            }
            currMin = min(arr[i], currMin);
        }

        std::cout << count << std::endl;
    }
    return 0;
}
