#include<bits/stdc++.h>
using namespace std;
void combSum(vector<int>v,int l,int r)
{
    int sum =0;
    for(int i=(l-1);i<r;i++)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
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
        int l,r;
        cin>>l>>r;
        combSum(v,l,r);
    }

    return 0;
}