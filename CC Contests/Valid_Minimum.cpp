#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int flag = 0;
    int a,b, c;
    cin >> a >> b>> c;
    if(min(a,b)==min(b,c) && min(a,b) == min(c,a)){
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }
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