#include <bits/stdc++.h>
using namespace std;
int main()
{
        // CODE HERE
        int MAX = 256;
        string S;
        cin >> S;
        int count[MAX] = {0};
        for (int i = 0; i < S.length(); i++)
        {
            count[S[i]]++;
        }
        int N;
        cin >> N;
        while (N--)
        {
            bool flag = true;
            string S2;
            cin >> S2;
            for (int j = 0; j < S2.length(); j++)
            {
                if (count[S2[j]] == 0)
                {
                    flag = false;
                }
            }
            if (flag == true)
            {
                std::cout << "Yes" << std::endl;
            }
            else
            {
                std::cout << "No" << std::endl;
            }
        }
    return 0;
}