#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int n,m,k;
        cin>>n>>m>>k;
        int tp = 0;
        int flag = 1;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        for(int i=0; i<n; i++){
            if (arr[i] == 1)
            {
                tp += 1;
            }
        }

        for(int i=0; i<m; i++){
            if (arr[i] != 1)
            {
                flag = 0;
            }
        }

        if (tp == n)
        {
            std::cout << 100 << std::endl;
        }
        else if (tp<n && flag == 1 && m<n)
        {
            std::cout << k << std::endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
    return 0;
}