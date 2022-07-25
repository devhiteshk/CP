#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        ll count = 0;
        ll X;
        cin >> X;
        string S;
        cin >> S;
        ll one = 0;
        //REMOVING TLE IN SUBSTRINGS
        
        for (ll i = 0; i < S.length(); i++)
        {
            if(S[i] == '1'){
                one += 1;
            }
        }

        std::cout << one*(one+1)/2 << std::endl;


        // BRUTE FORCE APPROACH FOR SUBSTRING
        // for (ll i = 0; i < S.length(); i++)
        // {
        //     for (ll j = i; j < S.length(); j++)
        //     {
        //         if (S[i] == '1' && S[j] == '1')
        //         {
        //             count += 1;
        //         }
        //     }
        // }
        // std::cout << count << std::endl;
    }
    return 0;
}