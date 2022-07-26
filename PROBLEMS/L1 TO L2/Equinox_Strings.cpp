#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        long long N, A, B;
        cin >> N >> A >> B;

        string X = "EQUINOX";
        long long Stk = 0; long long Anu = 0;

        while (N--)
        {
            
            string si;
            cin >> si;

            int temp = X.find(si[0]);

            if (temp >= 0)
            {
                Stk += A;
            }
            else
            {
                Anu += B;
            }
        }

        if (Stk > Anu)
        {
            std::cout << "SARTHAK" << std::endl;
        }
        else if (Anu > Stk)
        {
            std::cout << "ANURADHA" << std::endl;
        }
        else
        {
            std::cout << "DRAW" << std::endl;
        }
    }
    return 0;
}