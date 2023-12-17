#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int Size = 0;
    bool empty()
    {
        if (tail != NULL)
        {
            return false;
        }
        return true;
    }
    void push(int val)
    {
        Node *n = new Node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            Size++;
            return;
        }
        tail->next = n;
        n->prev = tail;
        tail = n;
        Size++;
    }
    void pop()
    {
        if (!empty())
        {
            Node *todelete = tail;
            tail = tail->prev;
            if(tail == NULL) head == NULL;
            delete todelete;
            Size--;
            return;
        }
        cout << "Empty Stack" << endl;
    }
    int top()
    {
        if (!empty())
            return tail->data;

        cout << "Empty stack" << endl;
    }
    int size()
    {
        return Size;
    }
    
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}