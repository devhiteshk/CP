#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define siz(x) ((int)x.size())
#define all(a) ((a).begin(), (a).end())

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

#define cin_arr(i) cin >> arr[i];
#define cout_arr(i) cout << arr[i];
#define eol cout << endl;
#define printVec(vec)                   \
    for (ll i = 0; i < vec.size(); i++) \
    {                                   \
        cout << vec[i] << " ";          \
    }                                   \
    eol;
#define printArr(arr, N)       \
    for (ll i = 0; i < N; i++) \
    {                          \
        cout << arr[i] << " "; \
    }                          \
    cout << endl;
#define cus_for(i, x, k, in) for (ll i = x; i < k; i += in)
#define cus_rfor(i, x, k, in) for (ll i = x; i >= k; i -= in)

template <typename T>
ll getMin(T arr[], ll N)
{
    ll min = INT_MAX;
    cus_for(i, 0, N, 1)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

template <typename T>
ll getMax(T arr[], ll N)
{
    ll max = INT_MIN;
    cus_for(i, 0, N, 1)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void solve()
{
    ll f;
    cin >> f;
    if (f <= 2)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        vector<ll> e(f);
        cus_for(i, 0, f, 1)
        {
            cin >> e[i];
        }

        if (e[0] == e[f - 1] || e[0] == e[f - 2] || e[1] == e[f - 1])
        {
            std::cout << "YES" << std::endl;
        }

        else
        {
            bool g = true;
            ll a = e[0];
            cus_for(i, 1, f - 4, 1)
            {
                if (e[i] == a)
                {
                    if (e[i + 1] == e[f - 1])
                    {
                        std::cout << "YES" << std::endl;
                        g = false;
                        break;
                    }
                }
            }
            if (g)
            {
                std::cout << "NO" << std::endl;
            }
        }
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

// ---> NEVER GIVE UP
//                        ▬▬▬▬▬▬▬▬▬▬▬.◙.▬▬▬▬▬▬▬▬▬▬▬
//                                ▂▄▄▓▄▄▂
//                              ◢◤██▀▀████▄▄▄▄▄▄▄▄▄▄◢◤
//                             █▄████▄ ███▀▀▀▀▀▀▀▀▀▀╬
//                              ◥█████◤
//                              ══╩══╩══
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬  ☻/🏓Have a nice Day !!!!!!!🏓
//                                ╬═╬ /▌
//                                ╬═╬ / \