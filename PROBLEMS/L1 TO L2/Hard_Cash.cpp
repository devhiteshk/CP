#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        std::cout << sum%k << std::endl;
    }
    return 0;
}
