#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        long long a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        long long ans = 0;
        ans += abs(a-c);
        ans += abs(b-d); 
        if (ans == k ){std::cout << "YES" << std::endl;}
        else if(ans<k)
        {
            k = k-ans;
            if(k%2 == 0){std::cout << "YES" << std::endl;}
            else{
            cout<<"NO"<<endl;}
        }
        else{std::cout << "NO" << std::endl;}


    }
    return 0;
}