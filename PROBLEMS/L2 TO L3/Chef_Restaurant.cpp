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
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> Interval;
    cus_for(i, 0, N, 1)
    {
        int tL, tR;
        cin >> tL >> tR;
        Interval.push_back(make_pair(tL, tR));
    }

    sort(Interval.begin(), Interval.end());

    // vector<pair<ll,ll>> ::iterator it;
    // for(it = Interval.begin(); it != Interval.end(); it++){
    //     std::cout << (*it).first <<" "<<(*it).second<<endl;
    // }

    while (M--)
    {
        int p;
        cin >> p;
        if (p >= Interval[N - 1].second)
        {
            cout << "-1" << endl;
        }
        else
        {
            int i = lower_bound(Interval.begin(), Interval.end(), make_pair(p, 0)) - Interval.begin();

            if (i > 0 && Interval[i - 1].second > p)

            // if previous second is greater than p i.e. p lies between the timing then wait is 0 else print next first - p

            {
                std::cout << 0 << std::endl;
            }
            else
            {
                std::cout << Interval[i].first - p << std::endl;
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