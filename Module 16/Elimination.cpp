#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        string s;
        cin >> s;

        stack<char> st;
        int i = 0;
        while (i < s.length())
        {
            if (st.empty() || s[i] == '0')
            {
                st.push(s[i]);
                i++;
            }
            else if (s[i] == st.top())
            {
                st.push(s[i]);
                i++;
            }
            else
            {
                while (s[i] == '1' && !st.empty() && st.top() == '0')
                {
                    st.pop();
                    i++;
                }
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}