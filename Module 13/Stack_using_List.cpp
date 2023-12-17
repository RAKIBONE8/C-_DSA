#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int> l;
    bool empty()
    {
        if(!l.empty())
        {
            return false;
        }
        return true;
    }
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        if(!l.empty()) 
        {
            l.pop_back();
            return;
        }
        cout<<"Empty Stack"<<endl;
    }
    int top()
    {
        if(!l.empty()) return l.back();

        cout<<"Empty stack"<<endl;
    }
    int size()
    {
        return l.size();
    }
};

int main()
{
    myStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}