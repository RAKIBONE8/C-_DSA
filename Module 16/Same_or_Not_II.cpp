#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{
public:
    Node *head = NULL;
    Node* tail = NULL;
    int size = 0;

    void push(int val)
    {
        size++;
        Node *n = new Node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            return;
        }
        tail->next = n;
        tail = tail->next;
    }
    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        Node *tmp = head;
        head = head->next;
        size--;
        delete tmp;
    }
    int front()
    {
        if(head == NULL)
        {
            return -1;
        }
        return head->data;
    }
    int qsize()
    {
        return size;
    }
    bool qempty()
    {
        if (size == 0)
        {
            return true;
        }
        return false;
    }
    
};

class Stack
{
public:
    Node* head = NULL;
    int size = 0;

    void push(int val)
    {
        size++;
        Node* n = new Node(val);
        if(head == NULL)
        {
            head = n;
            return;
        }
        n->next = head;
        head = n;
    }
    void pop()
    {
        if(head == NULL)
        {
            return;
        }
        Node* tmp = head;
        head = head->next;
        size--;
        delete tmp;
    }
    int top()
    {
        if(head == NULL)
        {
            return -1;
        }
        return head->data;
    }
    int Ssize()
    {
        return size;
    }
    bool Sempty()
    {
        if(size == 0)
        {
            return true;
        }
        return false;
    }
   
};
bool same(Stack &s, Queue &q)
{
    while (!s.Sempty())
    {
        if (s.top() != q.front())
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
    Stack st;
    Queue q;

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

    if (st.Ssize() != q.qsize())
    {
        cout << "NO" << endl;
    }
    else
    {
        if (same(st,q))
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