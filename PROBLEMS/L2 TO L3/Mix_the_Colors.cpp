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


void solve(){
    ll N;
    cin>>N;

    ll arr[N] = {0};

    cus_for(i,0,N,1){
        cin>>arr[i];
    }
    sort(arr,arr+N);

    ll Uniquecount = 0;

    cus_for(i,1,N,1){
        if(arr[i-1] != arr[i]){
            Uniquecount++;
        }
    }
    Uniquecount++;
    std::cout << N-Uniquecount << std::endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
    solve();}
    return 0;
}

