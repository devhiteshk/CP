#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define siz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

#define cin_arr(i) cin >> arr[i]
#define cout_arr(i) cout << arr[i] << " "
#define eol cout << endl;
#define cus_for(i, x, k, in) for (int i = x; i < k; i += in)
#define cus_rfor(i, x, k, in) for (int i = x; i >= k; i -= in)

void solve()
{
    ll n;
    cin >> n;
    if (n < 4)
    {
        if (n == 1)
        {
            std::cout << 1 << std::endl;
        }
        else
        {
            std::cout << "NO SOLUTION" << std::endl;
        }
    }
    else if (n == 4)
    {
        std::cout << "2 4 1 3" << std::endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            for (ll i = 2; i <= n; i += 2)
            {
                cout << i << " ";
            }
            for (ll i = 1; i <= n - 1; i += 2)
            {
                cout << i << " ";
            }
        }
        else if (n % 2 == 1)
        {
            for (ll i = 2; i <= n - 1; i += 2)
            {
                cout << i << " ";
            }
            for (ll i = 1; i <= n; i += 2)
            {
                cout << i << " ";
            }
        }
    }
}

int main()
{

    // HAPPY HACKING
    solve();

    return 0;
}
