#include<bits/stdc++.h>
using namespace std;
bool Available(vector<int>v,int x)
{
    while(!v.empty())
    {
        if(v.back() == x)
        {
            return true;
        }
        else
        {
            v.pop_back();
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(Available(v,v[i]+1))
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}