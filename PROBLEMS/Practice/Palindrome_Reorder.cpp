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
    string S;
    cin >> S;
    ll l = S.length();
    string ans = "";
    // std::cout << int('a') << " " << int('z') << std::endl;
    // std::cout << int('A') << " " << int('Z') << std::endl;

    ll Hash[123] = {0};

    cus_for(i, 0, l, 1)
    {
        Hash[int(S[i])] += 1;
    }

    // cus_for(i, 65, 123, 1)
    // {
    //     std::cout << Hash[i] << " ";
    // }
    // eol;

    ll oddCount = 0;
    char oddchar = {0};

    cus_for(i, 65, 123, 1)
    {
        if (Hash[i] % 2 == 1)
        {
            oddCount += 1;
            oddchar += char(i);
        }

        if (oddCount > 1)
        {
            break;
        }
    }

    if ((oddCount > 1 || l % 2 == 0) && (oddCount > 0))
    {
        std::cout << "NO SOLUTION" << std::endl;
    }
    else
    {
        ll len = 0;
        ll i = 65;
        ll odd_index = 0;
        cus_for(i, 65, 123, 1)
        {
            if (Hash[i] % 2 == 0 && Hash[i] > 0)
            {
                ll multiply = Hash[i] / 2;
                len += Hash[i] / 2;
                ans += string(multiply, char(i));
            }
            else
            {
                if (Hash[i] > 0)
                {
                    odd_index = i;
                }
                continue;
            }
        }

        ll ans_len = ans.length();
        ans += string(Hash[odd_index], oddchar);
        cus_rfor(i, ans_len - 1, 0, 1)
        {
            ans += ans[i];
        }
    }
    std::cout << ans << std::endl;
}

int main()
{
    solve();
    return 0;
}
