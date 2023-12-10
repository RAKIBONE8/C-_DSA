#include<bits/stdc++.h>
using namespace std;
void Quary(vector<int>v,int x)
{
    int flag = 0;
    while(!v.empty())
    {
        if(v.back()==x)
        {
            flag = 1;
            break;
        }
        else
        {
            v.pop_back();
        }
    }
    if(flag == 1)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
}

int main()
{
    int n,q;
    cin>>n>>q;

    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        Quary(v,x);
    }
    return 0;
}