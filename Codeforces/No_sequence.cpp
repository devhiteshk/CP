#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
#define ld long double

#define siz(x) ((int)x.size())
#define all(a) ((a).begin(), (a).end())

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

#define cin_arr(i) cin >> arr[i];
#define cout_arr(i) cout << arr[i];
#define eol cout << endl;
#define printVec(vec)                   \
    for (ll i = 0; i < vec.size(); i++) \
    {                                   \
        cout << vec[i] << " ";          \
    }                                   \
    eol;
#define printArr(arr, N)       \
    for (ll i = 0; i < N; i++) \
    {                          \
        cout << arr[i] << " "; \
    }                          \
    cout << endl;
#define cus_for(i, x, k, in) for (ll i = x; i < k; i += in)
#define cus_rfor(i, x, k, in) for (ll i = x; i >= k; i -= in)

template <typename T>
ll getMin(T arr[], ll N)
{
    ll min = INT_MAX;
    cus_for(i, 0, N, 1)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

template <typename T>
ll getMax(T arr[], ll N)
{
    ll max = INT_MIN;
    cus_for(i, 0, N, 1)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}




void solve()
{
    int N, K, S;
    cin>>N>>K>>S;

    int sum = 0;
    vector<pair<int, int>> v;
    for(int i = N; i >= 1; i--){
        int power = pow(K,i-1);
        if(power + sum <= S){
            v.push_back({1,i-1});
            sum += power;
        }else{
            v.push_back({-1*power, i-1});
        }
    }

    reverse(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++){
        if(v[i].first != 1){
            if(sum+v[i].first > S){
                v[i].first = -1;
            }else if(sum + v[i].first == 0){
                break;
            }else{
                v[i].first = 0;
            }
        }
    }

    if(sum == S){
        for(int i = 0; i<v.size(); i++){
            cout<<v[i].first << " ";
        }
        cout<<endl;
        return;
    }else if(sum<S){cout<<-2<<endl;return;}
    
    else{}
        for(int i = 0; i<v.size(); i++){
            cout<<v[i].first << "->"<<v[i].second<<" ";
        }cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
    solve();}
    return 0;
}


// ---> NEVER GIVE UP
//                        ▬▬▬▬▬▬▬▬▬▬▬.◙.▬▬▬▬▬▬▬▬▬▬▬
//                                ▂▄▄▓▄▄▂             
//                              ◢◤██▀▀████▄▄▄▄▄▄▄▄▄▄◢◤
//                             █▄████▄ ███▀▀▀▀▀▀▀▀▀▀╬
//                              ◥█████◤
//                              ══╩══╩══
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬ 
//                                ╬═╬
//                                ╬═╬
//                                ╬═╬  ☻/🏓Have a nice Day !!!!!!!🏓
//                                ╬═╬ /▌
//                                ╬═╬ / \