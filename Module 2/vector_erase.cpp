#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5};
    // v.erase(v.begin()+2,v.begin()+3);
    v.erase(v.begin()+2,v.end()-1);
    

    for(int i : v)
    {
        cout<<i<<" ";
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    return 0;
}