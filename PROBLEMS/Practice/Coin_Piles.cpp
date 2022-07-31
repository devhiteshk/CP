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
#define cout_arr(i) cout << arr[i]
#define eol cout << endl;
#define cus_for(i, x, k, in) for (int i = x; i < k; i += in)
#define cus_rfor(i, x, k, in) for (int i = x; i >= k; i -= in)


void solve()
{

    ll left;
    ll right;
    cin >> left >> right;
    ll flag = 0;
    ll diff = 0;

    if (left > right)
    {
        diff = left - right;
    }
    else
    {
        diff = right - left;
    }


    while (diff > 1 && left>0 && right > 0)
    {
        if (left > right)
        {
            left = left - (diff / 2) * 2;
            right = right - diff / 2;
        }
        else
        {
            right = right - (diff / 2) * 2;
            left = left - diff / 2;
        }

        if (left > right)
        {
            diff = left - right;
        }
        else
        {
            diff = right - left;
        }

        // std::cout << left << "\t" << right << std::endl;
    }

    if (left > right)
    {
        left -= 2;
        right -= 1;
    }
    else if(right>left)
    {
        left -= 1;
        right -= 2;
    }

    if (left == right && left % 3 == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
