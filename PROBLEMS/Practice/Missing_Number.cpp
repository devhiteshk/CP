#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (ll i = 0; i <= n; i++)
    {
        // CODE HERE
        cin >> arr[i];
    }
    sort(arr, arr + n + 1);

    ll ans = n;

    for (ll i = 0; i <= n + 1; i++)
    {
        if (arr[i + 1] == arr[i] + 2)
        {
            ans = arr[i] + 1;
            break;
        }
    }
    if (ans < n)
    {
        std::cout << ans << std::endl;
    }
    else
    {
        cout << n << endl;
    }
    return 0;
}