#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll S;
    cin>>S;
    ll Dintro[S] = {0};
    for(ll i=0; i<S; i++){
        cin>>Dintro[i];
    }

    ll total = 0;

    for(ll i=0; i<S; i++){
        ll noE;
        cin>>noE;
        ll wh = noE;
        ll temp = 0;
        while(wh--){
                
                ll x;cin>>x;
                total += x;
                temp += 1;
                if(temp > 1){total -= Dintro[i];}             
            }
    }

    std::cout << total << std::endl;
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