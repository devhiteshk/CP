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
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, string>>> s(n), b;
    for (int i = 0; i < n; i++)
        cin >> s[i].second.first;

    vector<pair<int, string>> ans;
    for (int i = 0; i < m; i++)
    {
        int f, p;
        string str;
        cin >> f >> p >> str;
        bool a = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i].second.first == f)
            {
                ans.push_back(make_pair(p, str));

                a = 1;
                break;
            }
        }
        if (!a)
        {
            b.push_back(make_pair(p, make_pair(f, str)));
        }
    }
    sort(b.begin(), b.end());
    sort(ans.begin(), ans.end());
    reverse(b.begin(), b.end());
    reverse(ans.begin(), ans.end());

    vector<pair<int, string>>::iterator it;
    vector<pair<int, pair<int, string>>>::iterator ite;

    for (it = ans.begin(); it != ans.end(); it++)
    {
        cout << (*it).second << endl;
        
    }

    for (ite = b.begin(); ite != b.end(); ite++)
    {
        cout << (*ite).second.second << endl;
    }
}

int main()
{
    solve();
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