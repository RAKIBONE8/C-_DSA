#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for(int i=0;i<n;i++) // O(N*N) complexity
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<"Hello Rakib"<<endl;
    //     }
    // }

    for (int i = 0; i < n - 1; i++) // O(N*N) complexity
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "Hello Rakib" << endl;
        }
    }
    return 0;
}