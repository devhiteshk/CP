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
    ll M, N, K;
    cin >> M >> N >> K;

    vector<ll> Ti;
    vector<ll> Pi;

    cus_for(i, 0, M, 1)
    {
        ll temp;
        cin >> temp;
        Ti.push_back(temp);
    }

    cus_for(i, 0, M, 1)
    {
        ll temp;
        cin >> temp;
        Pi.push_back(temp);
    }
    if(N>M){
        N = M;
    }

    ll lo = 1, hi = 1e9, sol = 1e9;

    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2;
        ll fake[M];
        for (int i = 0; i < M; i++)
        {
            if (mid < Ti[i])
                fake[i] = 0;
            else
                fake[i] = ((mid - Ti[i]) / Pi[i]) + 1;
        }
        sort(fake, fake + M, greater<ll>());
        ll temp = 0;
        for (int i = 0; i < N; i++)
            temp += fake[i];
        if (temp >= K)
        {
            sol = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << sol << endl;
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