#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll N;
    cin >> N;
    if (N == 1)
    {
        std::cout << 3 << std::endl;
    }
    else
    {
        cout << 3;
        for (ll i = 0; i < N - 2; i++)
        {
            std::cout << 0;
        }
        std::cout << 3 << std::endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        solve();
    }
    return 0;
}