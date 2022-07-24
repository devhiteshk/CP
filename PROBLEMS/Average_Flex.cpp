#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++){cin>>arr[i];}
    int count = 0;
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        int cl = 0;
        int cg = 0;
        for(int j=0; j<n; j++){
            if(j == i){continue;}
            else{
                if(arr[j]<=arr[i]){cl += 1;}
                if(arr[j]>arr[i]){cg += 1;}
            }
        } if(cl>=cg){count += 1;}
    }
    std::cout << count << std::endl;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}