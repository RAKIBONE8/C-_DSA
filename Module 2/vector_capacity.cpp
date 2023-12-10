#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    
    // cout<<v.max_size()<<endl;
    
    v.push_back(10);
    
    v.push_back(20);
   
    v.push_back(30);

    // v.clear();
    v.resize(2);
    v.resize(7,100);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    /*
    for(int i=0;i<100;i++)
    {
        v.push_back(100);
        cout<<v.size()<<endl;
        cout<<v.capacity()<<endl;
    }
    */
    return 0;
}