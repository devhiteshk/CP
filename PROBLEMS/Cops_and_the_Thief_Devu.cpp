#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE HERE
        int M,x,y;
        cin>>M>>x>>y;

        int arr[M];
        int Houses[100] = {0};

        for (int i = 0; i < M; i++)
        {   
            cin>>arr[i];
        }

        int tra = x*y;

        for (int i = 0; i < M; i++)
        {   
            int j; int en = 0;
            
            if(arr[i] - tra <0){ j = 0;}
            else{ j = arr[i] - tra - 1;}
            
            if(arr[i] + tra>100){ en = 100;}
            else{ en = arr[i] + tra;}

            for( j; j < en ; j++){
                    if(Houses[j] == 0){ Houses[j] = 1;}
                    else{continue;}
            }
        }
        int count = 0;
        for(int i = 0; i<100; i++){
            if(Houses[i] == 0){count += 1;}
        }

        std::cout << count << std::endl;
    }
    return 0;
}