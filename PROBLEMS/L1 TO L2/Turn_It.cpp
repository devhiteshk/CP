#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int u,v,a,s;
        cin>>u>>v>>a>>s;
        if (u == v)
        {
            /* code */
            std::cout << "Yes" << std::endl;
        }
        else
        {
            float V;
            V = sqrt(u*u -2*a*s);
            // std::cout << V << std::endl;
            if (V<=v || u*u -2*a*s<= v*v){
                std::cout <<"Yes" << std::endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        

    }
    return 0;
}