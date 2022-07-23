#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int maxT,sumT;
        cin>>maxT>>sumT;
        if (sumT < maxT){std::cout << sumT << std::endl;}
        else{ std::cout << 2*maxT - sumT << std::endl; }

    }
    return 0;
}