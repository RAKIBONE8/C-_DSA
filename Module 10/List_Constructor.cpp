#include<bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    list<int> list2 = {1,2,3,4,5};
    int a[5] = {10,20,30,40,50}; // Array
    // list<int>myList(10,5);
    
    // list<int>myList(list2); // Copying from another List
    // list<int> myList(a,a+5); Copying form Array

    vector<int> v = {100,2,3,4,500};
    list<int>myList(v.begin(),v.end()); //copying from pointer
    // for(auto it = myList.begin();it != myList.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }

    for(int val : myList)
    {
        cout<<val<<endl;
    }
    return 0;
}