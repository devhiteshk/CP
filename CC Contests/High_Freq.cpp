#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll N;
    cin >> N;
    ll arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    ll hash[N] = {0};

    for (int i = 0; i < N; i++)
    {
        hash[arr[i]] += 1;
    }
    int miN = 9999999;
    int maX = -1;
    vector<int> arr2 = {0};
    for (int i = 1; i < N; i++)
    {
        if (hash[i] > 0)
        {
            arr2.push_back(hash[i]);
        }
        int curr = hash[i];
        maX = max(curr, maX);
        if (curr > 0)
        {
            miN = min(miN, curr);
        }
    }
    sort(arr2.begin(), arr2.end());
    int l = arr2.size();

    if (arr2[l - 1] % 2 == 0)
    {
        arr2[l - 1] = arr2[l - 1] / 2;
    }
    else
    {
        arr2[l - 1] = (arr2[l - 1] + 1) / 2;
    }

    sort(arr2.begin(), arr2.end());

    std::cout << arr2[l - 1] << std::endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        solve();
    }
    return 0;
}