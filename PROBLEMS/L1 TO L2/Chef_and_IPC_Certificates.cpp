#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    int count = 0;
    cin >>n>>m>>k;
    while (n--)
    {
        // CODE HERE
        int q,s = 0; // you forgot to initialize the variables :) 
        int arr[k];
        for (int i = 0; i < k; i++)
        {
         cin>>arr[i]; 
        }  
        cin>>q;
        for (int i = 0; i < k; i++)
        {
            s += arr[i];
        }  
        if(s>=m && q<=10){ count += 1; }
    }
        std::cout << count << std::endl;
    return 0;
}

