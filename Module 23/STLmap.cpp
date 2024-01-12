#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    /*
    mp.insert({"Virat Kohli",18});
    mp.insert({"Ms Dhoni",7});
    mp.insert({"Sachin Tendulker",10});
    mp.insert({"Rakib",100});
    mp.insert({"AB",0});

    */

    // we can also assign in this way
    mp["Virat Kohli"] = 18; // O(logN)
    mp["Ms Dhoni"] = 7;
    mp["Sachin"] = 10;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    /*
    if(mp.count("AB")) // it gives true or false || according to presence and absence
    {
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Absent"<<endl;
    }
    */
    return 0;
}