#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    std::cout << max(a,b) + max(c,d) << std::endl;
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