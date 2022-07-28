#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> inp_arr(vector<ll> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

vector<ll> out_arr(vector<ll> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return arr;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    inp_arr(arr, n);

    ll count = 0;
    ll maX = arr[0];

    for (ll i = 1; i < n; i++)
    {
        ll curr = arr[i];
        if (arr[i] >= arr[i - 1] && curr >= maX)
        {
            maX = curr;
        }
        else
        {
            count += maX - arr[i];
        }
    }
    std::cout << count << std::endl;
    return 0;
}