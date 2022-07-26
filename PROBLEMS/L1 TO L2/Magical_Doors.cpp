#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        string s;
        cin >> s;

        ll countMagic = 0;
        if (s[0] == '0')
        {
            countMagic += 1;
        }
        char curr = s[0];
        for (long long i = 0; i < s.length(); i++)
        {
            char temp = s[i];
            if (temp == curr)
            {
                continue;
            }
            else
            {
                curr = temp;
                countMagic += 1;
            }
        }
        cout << countMagic << endl;
    }
    return 0;
}