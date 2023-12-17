#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    bool empty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        return false;
    }
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (!v.empty())
        {
            v.pop_back();
            return;
        }
        cout << "Empty Stack" << endl;
    }
    int top()
    {
        if(!v.empty())
        {
            return v.back();
        }
        cout<<"Empty Stack"<<endl;
        return 0;
        
    }
    int size()
    {
        v.size();
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