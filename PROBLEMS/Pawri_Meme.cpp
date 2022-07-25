#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        string S;
        cin >> S;

        for(int i=0; i<S.length();i++){
            if(i + 4<S.size() && S.substr(i,5) == "party"){
                S[i+2] = 'w';
                S[i+3] = 'r';
                S[i+4] = 'i';
                i += 4;
            }
            
        }

        std::cout << S << std::endl;  
    }
    return 0;
}
