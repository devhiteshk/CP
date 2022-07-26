#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        string X;
        cin >> X;
        string Y;
        cin >> Y;
        int flag = 1;
        for (int i = 0; i < X.size(); i++)
        {
            if (X[i] == Y[i] || X[i] == '?' || Y[i] == '?')
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            std::cout << "No" << std::endl;
        }
        else
        {
            std::cout << "Yes" << std::endl;
        }
    }
    return 0;
}