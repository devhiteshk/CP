//     c    1  2  3  4  5 

// r 1      1  2  9  10 25
//   2      4  3  8  11 24
//   3      5  6  7  12 23 
//   4      16 15 14 13 22
//   5      17 18 19 20 21
  
// r%2 == 0 => r^2
// c%2 == 1 => c^2

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
    ll x, y;
    cin >> x >> y;
    if (x > y)   // IF ROW IS GREATER THAN COLUMN
    { 
        if (x%2 == 0)   // IF ROW%2 == 0 THEN ANS IS GIVEN BY X^2 - Y + 1
        {
            std::cout << (x * x) - y + 1 << std::endl;
        }
        else            // IF ROW%2 == 1 THEN ANS IS GIVEN BY (X-1)^2 + Y
        {
            std::cout << (x - 1) * (x - 1) + y << std::endl;
        }
    }
    else
    {
        if (y%2 == 1)   // IF COLUMN%2 == 1 THEN ANS IS GIVEN BY Y^2 - X + 1
        {
            std::cout << (y * y) - x + 1 << std::endl;
        }
        else            // IF COLUMN%2 == 0 THEN ANS IS GIVEN BY (Y-1)^2 + X
        {
            std::cout << (y - 1) * (y - 1) + x << std::endl;
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
