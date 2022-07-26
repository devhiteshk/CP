#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        string S;
        cin >> S;

        int MAX = 256;
        int count[MAX] = {0};
        int l = S.length();

        int lo = 0;
        int hi = l - 1;

        while (lo < hi)
        {
            count[S[lo]] += 1;
            count[S[hi]] -= 1;
            lo += 1;
            hi -= 1;
        }

        int flag = 0;
        int low = 0;
        int high = l - 1;

        while (low < high)
        {
            if (count[S[low]] > 0 || count[S[high]] > 0)
            {
                flag = 1;
                break;
            }
            low += 1;
            high -= 1;
        }

        if (flag == 1)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            std::cout << "YES" << std::endl;
        }
    }
    return 0;
}