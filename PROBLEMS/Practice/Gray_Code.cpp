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

void printBin(string S, ll l)
{
    cus_for(i, 31 - l, 33, 1)
    {
        std::cout << S[i];
    }
    eol;
}

void solve()
{
    ll n = 0;
    cin >> n;
    ll t = pow(2, n);
    
    for (int i = 0; i < (1 << n); i++)
    {
        // Generating the decimal
        // values of gray code then using
        // bitset to convert them to binary form
        int val = (i ^ (i >> 1));
         
        // Using bitset
        bitset<32> r(val);
         
        // Converting to string
        string s = r.to_string();
        cout << s.substr(32 - n) <<endl;
    }
}

int main()
{
    solve();
    return 0;
}
