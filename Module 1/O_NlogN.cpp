#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) // O(n)
    {
        int x = i;
        while(x>0) // O(log n)
        {
            int lastdigit = x%10;
            cout<<lastdigit<<" ";
            x/=10;
        }
        cout<<endl;
    }
    return 0;

    // total complexity is O(n log(n))
}