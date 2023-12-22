#include<bits/stdc++.h>
using namespace std;
bool same(stack<int> s,queue<int>q)
{
    while(!s.empty())
    {
        if(s.top() != q.front())
        {
            return false;
        }
        s.pop();
        q.pop();
    }
    return true;
}

int main()
{
    stack<int> st;
    queue<int> q;

    int n,m;
    cin>>n>>m;

    while(n--)
    {
        int x;
        cin>>x;

        st.push(x);
    }
    while(m--)
    {
        int x;
        cin>>x;

        q.push(x);
    }

    if(st.size() != q.size())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(same(st,q))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}