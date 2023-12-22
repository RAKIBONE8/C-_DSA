// Question: Take a stack of size N and a queue of size M as input. 
//Then check if both of them are the same or not in the order of removing. 
//You should use STL to solve this problem.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n,m;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    cin>>m;

    while(m--)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    int flag = 1;

    if(st.size() != q.size())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        while(!st.empty())
        {
            if(st.top() != q.front())
            {
                cout<<"NO"<<endl;
                flag = 0;
                break;
            }
            st.pop();
            q.pop();

        }
        if(flag == 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}