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
#define printVec(vec)                    \
    for (int i = 0; i < vec.size(); i++) \
    {                                    \
        cout << vec[i] << " ";           \
    }                                    \
    eol;
#define printArr(arr, N)        \
    for (int i = 0; i < N; i++) \
    {                           \
        cout << arr[i] << " ";  \
    }                           \
    cout << endl;
#define cus_for(i, x, k, in) for (int i = x; i < k; i += in)
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

void printMap(map<int, int> h)
{

    map<int, int>::iterator itr;
    for (itr = h.begin(); itr != h.end(); ++itr)
    {
        cout << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
}

void solve()
{
    ll N, M, X;
    cin >> N >> M >> X;

    ll hash[10000] = {0};

    vector<ll> arr;
    cus_for(i, 0, N, 1)
    {
        ll temp;
        cin >> temp;
        arr.push_back(temp);
        hash[arr[i]] = i + 1;
    }

    sort(arr.begin(), arr.end(), greater<int>());

    vector<ll> ans;
    ll q = 0;
    cus_for(i, 0, N, 1)
    {
        if (arr[i] >= M)
        {
            ans.push_back(hash[arr[i]]);
            q++;
        }
    }

    if (q < X)
    {
        cus_for(i, q, X, 1)
        {
            ans.push_back(hash[arr[i]]);
            q++;
        }
    }

    sort(ans.begin(), ans.end());
    std::cout << ans.size() << " ";
    printVec(ans);
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