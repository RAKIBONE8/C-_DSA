#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x = {10, 20, 30, 40};

    x.pop_back();
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    // vector<int> v = {1, 2, 3};
    // v = x; // O(n)  
    // // if both of their size will same then its complexity will be O(1)
    
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    return 0;
}