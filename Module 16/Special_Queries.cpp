#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Query;
    cin>>Query;

    queue<string> q;
    while(Query--)
    {
        int cmd;
        string s;
        cin>>cmd;

        if(cmd == 1 && !q.empty())
        {
            cout << q.front() << endl;
            q.pop();
            
        }
        else if(cmd == 0)
        {   
            cin>>s;
            q.push(s);
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}