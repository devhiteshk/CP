#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        long long n;
        cin >> n;
        long long arr[n];
        long long min = 999999;
        for (long long i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        std::cout << arr[0]+arr[1] << std::endl;
    }
    return 0;
}