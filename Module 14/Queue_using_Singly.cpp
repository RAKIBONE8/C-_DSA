#include <bits/stdc++.h>
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
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int s = 0;
    void push(int val)
    {
        s++;
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
        s--;
        Node *todelete = head;
        head = head->next;
        delete todelete;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->data;
    }
    int size()
    {
        return s;
    }
    bool empty()
    {
        if (s == 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}