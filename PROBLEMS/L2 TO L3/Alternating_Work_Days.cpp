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
        ll A, B, P, Q;
        cin >> A >> B >> P >> Q;
        if (P % A != 0 || Q % B != 0)
        {
            std::cout << "NO" << std::endl;
        }
        else if (P / A == Q / B || P / A == Q / B + 1 || P / A == Q / B - 1)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
