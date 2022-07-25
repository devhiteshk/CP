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
        int ans = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (i + 2 < S.size() && (S.substr(i, 3) == "101" || S.substr(i, 3) == "010"))
            {
                ans = 1;
            }
        }
        if (ans == 1)
        {
            std::cout << "Good" << std::endl;
        } 
        else
        {
            std::cout << "Bad" << std::endl;
        }
    }
    return 0;
}