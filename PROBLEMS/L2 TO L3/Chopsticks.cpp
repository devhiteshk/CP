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
    ll N, D;
    cin >> N >> D;
    vector<ll> arr(N);
    cus_for(i, 0, N, 1)
    {
        cin >> arr[i];
    }

    ll ans = 0;
    sort(all(arr));

    ll curr = 0;
    ll i = 0;

    while (i < N - 1)
    {
        if (arr[i + 1] - arr[i] <= D)
        {
            i += 2;
            ans += 1;
        }
        else
        {
            i += 1;
        }
    }
    std::cout << ans << std::endl;
}

int main()
{
    solve();
    return 0;
}
