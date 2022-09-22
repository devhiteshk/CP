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
    ll N;
    cin >> N;

    ll arr[N];
    cus_for(i, 0, N, 1)
    {
        cin >> arr[i];
    }

    ll Q;
    cin >> Q;

    for (ll q = 0; q < Q; q++)
    {

        ll p, k;
        cin >> p >> k;

        ll hash_v[N] = {0};
        cus_for(i, 0, N, 1)
        {
            if (arr[i] % p == 0)
            {
                hash_v[i] = 1;
            }
        }

        vector<ll> max_dish;
        cus_for(i, 0, N, 1)
        {
            if (arr[i] % p == 0)
            {
                max_dish.push_back(arr[i]);
            }
        }


        vector<ll> ans;
        ll j = 0;
        cus_for(i, 0, k, 1)
        {
            if (hash_v[i] == 0)
            {
                ans[i] = max_dish[j];
                j++;
            }
            else
            {
                ans[i] = arr[i];
            }
        }

        ll sum = 0;
        cus_for(i, 0, k, 1)
        {
            sum += ans[i];
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