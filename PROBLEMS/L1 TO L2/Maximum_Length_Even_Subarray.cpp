#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int n;
        cin>>n;
        int s = n*(n+1)/2;
        if(s%2 == 0){std::cout << n << std::endl;}
        else{std::cout << n-1 << std::endl;}
    }
    return 0;
}