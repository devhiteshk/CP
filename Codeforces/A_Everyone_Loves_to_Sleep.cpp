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
    ll n, H, M;
    cin >> n >> H >> M;

    vector<vector<ll>> arrHM;

    cus_for(i, 0, n, 1)
    {
        cin >> arrHM[i][0];
        cin >> arrHM[i][1];
    }
    eol;
    
    cus_for(i, 0, n, 1)
    {
        cout<<arrHM[i][0];
        cout<<arrHM[i][1];
    }
    eol;   
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
