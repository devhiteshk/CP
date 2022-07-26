#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int n,p,x,y;
        int time = 0;
        cin>>n>>p>>x>>y;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i<p; i++){
            if (arr[i] == 0)
            {
                time += x;
            }else{
                time += y;
            }
        }
        std::cout << time << std::endl;
        
    }
    return 0;
}