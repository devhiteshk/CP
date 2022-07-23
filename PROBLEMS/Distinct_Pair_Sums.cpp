#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int L,R;
        int count = 0;
        cin>>L>>R;
        int n = R-L;
        std::cout << 2*R - 2*L + 1 << std::endl;
        // if(R-L == 0){std::cout << 1 << std::endl;}
        // else{
        // vector<int> ANS;
        // ANS.resize(2*R + 1,-1);
    
        // for(int i= L; i<= R; i++){
        // for(int j = L; j<= R; j++){
        //     // cout<<i+j<<endl;
        //     if(ANS[i+j] < 0)
        //     {   //cout<<i+j<<endl;
        //         ANS[i+j] = i+j; count += 1;
        //     }
            
        // }
        // }
        // std::cout << count << std::endl;
        // }
    }

    return 0;
}