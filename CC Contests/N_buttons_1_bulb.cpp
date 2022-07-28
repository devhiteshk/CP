#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll N;
    cin >> N;
    string S;
    cin >> S;
    string R;
    cin >> R;
    int count = 0;
    for (ll i = 0; i < S.length(); i++)
    {
        if (S[i] == R[i])
        {
            continue;
        }
        else
        {
            count += 1;
        }
    }
    if (count % 2 == 0)
    {
        std::cout << "1" << std::endl;
    }
    else
    {
        std::cout << 0 << std::endl;
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