#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // CODE HERE
    int N, M;
    cin >> N >> M;
    int X, Y;
    cin >> X >> Y;
    string ans = "";

    while (N--)
    {
        /* code */
        int solved = 0;
        int partially = 0;

        for (int i=0; i < M; i++)
        {
            char temp;
            cin >> temp;
            if (temp == 'F')
            {
                solved += 1;
            }
            if (temp == 'P')
            {
                partially += 1;
            }
        }
        if (solved >= X || (solved == X - 1 && partially >= Y))
        {
            ans += "1";
        }
        else
        {
            ans += "0";
        }
    } std::cout << ans << std::endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}