// Question: Take two stacks of size N and M as input and check if both of them are the same or not.
// Don’t use STL to solve this problem.

#include <bits/stdc++.h>
using namespace std;
class Stack
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
        return v.back();
    }
    int size()
    {
        return v.size();
    }
};

int main()
{
    Stack st1;
    Stack st2;

    int N, M;
    cin >> N;

    while (N--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    cin >> M;

    while (M--)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    int flag = 1;

    if (st1.size() != st2.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        while (!st1.empty() && !st2.empty())
        {
            if (st1.top() != st2.top())
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}