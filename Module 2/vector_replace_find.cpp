#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    vector<int> v = {1,2,3,4,5,6,3,3,3,2,5,6,7,02};
    replace(v.begin(),v.end(),3,18);

    for(int i:v)
    {
        cout<<i<<" ";
    }

    // all 3 are replaced
    */

    vector<int> v = {1, 2, 3, 4, 5, 3, 3, 3, 2, 5, 6};
    // vector<int> :: iterator it;
    auto it = find(v.begin(), v.end(), 6);
    if( it == v.end()) cout<<"Not found";
    else cout<<"found";
    return 0;
}