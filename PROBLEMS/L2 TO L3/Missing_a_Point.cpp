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
    ll N;
    cin>>N;
    ll x1,y1;
    cin>>x1>>y1;

    cus_for(i,1,4*N-1,1){
        ll x; ll y;
        cin>>x>>y;
        x1 = x1^x;
        y1 = y1^y;
    }
    std::cout << x1<<" "<<y1<< std::endl;
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
