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
#define cus_for(i, x, k, in) for (long long i = x; i < k; i += in)
#define cus_rfor(i, x, k, in) for (long long i = x; i >= k; i -= in)

void solve()
{
    ll n;
    cin >> n;

    ll Sum = n * (n + 1) / 2;

    if (Sum % 2 == 1)
    {
        std::cout << "NO" << std::endl;
    }
    else
    {
        vector<ll> set1 = {0};
        vector<ll> set2 = {0};
        ll halfsum = Sum / 2LL;

        while (n)
        {
            if (halfsum - n >= 0)  //LOGIC IMP 
            {
                set1.push_back(n);
                halfsum -= n;
            }
            else
            {
                set2.push_back(n);
            }
            n--;
        }

        // PRINTING SET 1 AND 2
        std::cout << "YES" << std::endl;
        std::cout << set1.size() - 1 << std::endl;
        cus_for(i, 1, int(set1.size()), 1)
        {
            std::cout << set1[i] << " ";
        }
        eol;

        std::cout << set2.size() - 1 << std::endl;
        cus_for(i, 1, int(set2.size()), 1)
        {
            std::cout << set2[i] << " ";
        }
        eol;
    }
}

int main()
{
    solve();
    return 0;
}