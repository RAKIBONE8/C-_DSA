#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // while(n!=0) // O(log n)
    // {
    //     int lastdigit = n%10;
    //     cout<<lastdigit<<endl;
    //     n/=10;
    // }
    for(int i=1;i<=n;i = i*2) // O(log n) complexity
    {
        cout<<i<<endl;
    }
    return 0;
}