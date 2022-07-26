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
        int count = 0; int ans = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {   
            int j = arr[i];
            if (j>= 1 && j <= 7)
            {
                count += 1;
            }
            if (count == 7)
            {  
                ans = i+1;
                break;
            }
        }
        std::cout << ans<< std::endl;
    }
    return 0;
}