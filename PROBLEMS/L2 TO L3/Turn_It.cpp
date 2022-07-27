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
        float U, V, A, S;
        cin >> U >> V >> A >> S;
        float v = sqrt(U * U + 2 * A * S);
        if (U == V)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            if (v <= V)
            {
                std::cout << "Yes" << std::endl;
            }
            else
            {
                std::cout << "No" << std::endl;
            }
        }
    }
    return 0;
}