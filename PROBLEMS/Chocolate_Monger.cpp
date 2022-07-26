#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    set<int> s1;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s1.insert(temp);
    }

    int ans = (int)s1.size();

    ans = min(ans, n - x);

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}