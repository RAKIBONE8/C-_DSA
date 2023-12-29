/*
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
void insertAtHead(Node *&head, Node *&tail, int val)
{

    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}
void insertAtTail(Node *&head, Node *&tail, int val)
{

    Node *n = new Node(val);
    if (head == NULL)
    {
        insertAtHead(head, tail, val);
        return;
    }
    tail->next = n;
    n->prev = tail;
    tail = tail->next;
}
void insertAtPos(Node *&head, Node *&tail, int val, int pos)
{

    Node *n = new Node(val);
    if (head == NULL)
    {
        insertAtHead(head, tail, val);
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    n->next = tmp->next;
    // if(tmp->next == NULL)
    // {
    //     insertAtTail(head,tail,val);
    //     return;
    // }
    if (tmp->next != NULL)
    {
        n->next->prev = n;
    }
    tmp->next = n;
    n->prev = tmp;
}
void DeleteHead(Node *&head)
{
    Node *del = head;
    head = head->next;
    delete del;
}
void Delete(Node *&head, int pos)
{
    if (head == NULL)
    {
        DeleteHead(head);
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *del = tmp->next;
    tmp->next = del->next;
    if (del->next != NULL)
    {
        del->next->prev = tmp;
    }
    delete del;
}
void Display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);

    while (true)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            break;
        }
        insertAtTail(head, tail, x);
    }
    Display(head);
    insertAtPos(head, tail, 18, 2);
    Display(head);
    Delete(head, 4);
    Display(head);
    return 0;
}
*/

// Stack Implementation

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
class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *n = new Node(val);
        if (head == NULL)
        {
            head = n;
            tail = n;
            return;
        }
        tail->next = n;
        n->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        Node *del = tail;
        if(this->empty())
        {
            cout<<"Empty Stack"<<endl;
            return;
        }
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
            delete del;
            sz--;
            return;
        }
        tail = tail->prev;
        sz--;
        delete del;
    }
    int top()
    {
        if (tail != NULL)
        {
            return tail->data;
        }
        cout << "Empty Stack" << endl;
        return -1;
    }
    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        return false;
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}