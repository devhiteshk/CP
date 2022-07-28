#include <iostream>
using namespace std;
#include <vector>
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; i += 2)
        {
            if (a[i - 1] > a[i])
            {
                swap(a[i - 1], a[i]);
            }
            if (i + 1 < n && a[i] < a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }
        }
        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
