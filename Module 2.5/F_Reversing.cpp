#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }

    while(!v1.empty())
    {
        cout<<v1.back()<<" ";
        v1.pop_back();
    }

    return 0;
}