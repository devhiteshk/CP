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
        ll N, K;
        cin >> N >> K;

        std::cout << N / __gcd(K, N) << std::endl;
    }
    return 0;
}