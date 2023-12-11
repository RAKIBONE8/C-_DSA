#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {40,20,60,10,50,45,71,10};

    // myList.remove(10); 
    // myList.sort(); // ascending order sort
    // myList.sort(greater<int>()); // descending order
    // myList.unique();
    myList.reverse();
    for(int val : myList)
    {
        cout<<val<<" ";
    }
    return 0;
}