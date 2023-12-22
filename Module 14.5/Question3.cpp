// Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them.
// You should use STL to solve this problem.

#include <bits/stdc++.h>
using namespace std;
// void pushInAnother(stack<int> st1,stack<int> &st2,int n,int val)
// {
//     if(n == 1)
//     {
//         st2.push(val);
//         return;
//     }
//     st1.pop();
//     pushInAnother(st1,st2,n-1,val);
// }

int main()
{
    stack<int> st1;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin>>x;
        st1.push(x);
    }

    stack<int> st2;
    while(!st1.empty())
    {
        // pushInAnother(st1,st2,st1.size(),st1.top());
        st2.push(st1.top());
        st1.pop();
    }
    while(!st2.empty())
    {
        cout<<st2.top()<<endl;
        st2.pop();
    }
    return 0;
}