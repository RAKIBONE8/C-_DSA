#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        string s;
        cin>>s;

        stack<char> st;
        for(char c:s)
        {
            if(st.empty() || c == st.top())
            {
                st.push(c);
            }
            else if(c == '0' && st.top() == '1')
            {
                st.pop();
            }
            else
            {
                st.pop();
            }
        }
        if(st.empty())
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