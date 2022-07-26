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
        int L;
        cin >> L;
        string ans = "";
        for (int i = 0; i < L; i++)
        {
            char S;
            cin >> S;
            if (S == 'H' || S == 'T')
            {
                ans += S;
            }
        }

        if (ans == "")
        {
            std::cout << "Valid" << std::endl;
        }
        else if (ans.length() % 2 == 1)
        {
            std::cout << "Invalid" << std::endl;
        }
        else
        {
            if (ans[0] == 'H')
            {
                int flag = 0;
                for (int j = 1; j < ans.length(); j++)
                {
                    if (j % 2 == 0 && ans[j] != 'H')
                    {
                        flag = 1;
                        break;
                    }
                    else if (j % 2 == 1 && ans[j] == 'H')
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    std::cout << "Invalid" << std::endl;
                }
                else
                {
                    std::cout << "Valid" << std::endl;
                }
            }
            else
            {
                std::cout << "Invalid" << std::endl;
            }
        }
    }
    return 0;
}