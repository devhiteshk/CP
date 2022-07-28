#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;

    while (n > 1)
    {

        std::cout << n << " ";
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
    }
    std::cout << 1 << std::endl;

    return 0;
}

