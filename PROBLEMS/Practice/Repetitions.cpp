#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string S;
    cin >> S;
    int maX = 1;
    int count = 1;
    for (int i = 0; i < S.length() - 1; i++)
    {
        char curr = S[i];
        if (curr != S[i + 1])
        {
            count = 1;
        }
        else if (curr == S[i + 1])
        {
            count += 1;
            maX = max(count, maX);
        }
    }
    std::cout << maX << std::endl;
    return 0;
}