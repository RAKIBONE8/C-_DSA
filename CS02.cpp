#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int> &v)
{
    vector<int> r(v.size(), -1);
    stack<int> st;

    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            r[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    return r;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> r = nextGreater(v);

    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << " ";
    }
    return 0;
}