#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        ll n;
        cin >> n;

        ll temp = 1;

        for (int i = 1; i < n; i++)
        {
            std::cout << i + 1 << " ";
        }
        std::cout << 1 << std::endl;
    }
    return 0;
}