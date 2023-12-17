#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> MyList;
    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        MyList.push_back(v);
    }
    MyList.sort();
    MyList.unique();
    while (!MyList.empty())
    {
        cout << MyList.front() << " ";
        MyList.pop_front();
    }
    cout << endl;
    return 0;
}