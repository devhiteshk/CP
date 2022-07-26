#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int n,m;
        cin>>n>>m;
        int hash[m] = {0};
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            hash[arr[i]-1] += 1;
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            if(hash[i]==0){
                ans = 1;
                break;
            }
        }

        if(ans == 1){
            std::cout << "Yes" << std::endl;
        }else{
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}