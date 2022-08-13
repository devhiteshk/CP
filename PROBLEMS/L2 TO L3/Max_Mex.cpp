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
#define printArr(arr, N)       \
    for (ll i = 0; i < N; i++) \
    {                          \
        cout << arr[i] << " "; \
    }                          \
    cout << endl;
#define cus_for(i, x, k, in) for (int i = x; i < k; i += in)
#define cus_rfor(i, x, k, in) for (int i = x; i >= k; i -= in)

ll getMax(ll arr[], ll N)
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

ll getMin(ll arr[], ll N)
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

void solve()
{

    int n, k;
    cin >> n >> k;

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        s.insert(x);
    }

    int j = 0;
    
    while (true)
    {
        if (s.count(j) == 1)
        {
            j++;
            continue;
        }

        if (k == 0)
        {
            cout << j << "\n";
            break;
        }
    
        j++;
        k--;
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
