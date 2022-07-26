#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int n,k;
        cin>>n>>k;
        while (n-k>=0)
        {
            n = n - k;
        }
        std::cout << n << std::endl;
    }
    return 0;
}