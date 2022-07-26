#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        string pass;
        cin >> pass;
        if (pass.length() < 10)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            bool a = 0, b = 0, c = 0, d = 0;

            for (int i = 0; i < pass.length(); i++)
            {
                if (int(pass[i]) >= 97 && int(pass[i]) <= 122)
                {
                    a = true;
                }
            }

            for (int i = 1; i < pass.length() - 1; i++)
            {
                if (int(pass[i]) >= 65 && int(pass[i]) <= 90)
                {
                    b = true;
                }
                if (int(pass[i]) >= 48 && int(pass[i]) <= 57)
                {
                    c = true;
                }
                if (pass[i] == '@' || pass[i] == '%' || pass[i] == '#' || pass[i] == '?' || pass[i] == '&')
                {
                    d = true;
                }
            }

            if (a & b & c & d)
            {
                std::cout << "YES" << std::endl;
            }
            else
            {
                std::cout << "NO" << std::endl;
            }
        }
    }
    return 0;
}