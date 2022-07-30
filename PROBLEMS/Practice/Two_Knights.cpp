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
    ll K;
    cin >> K;
    for (ll k = 1; k <= K; k++)
    {
        ll ans = (pow(k, 2) * (pow(k, 2) - 1)/2) - 4 * ((k - 1) * (k - 2));
        std::cout << ans << std::endl;
    }
}

int main()
{
    solve();
    return 0;
}
