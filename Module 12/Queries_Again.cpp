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
int sz(Node *head)
{
    Node *tmp = head;
    int count = 0;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insertAthead(Node *&head, Node *&tail, int v)
{
    Node *n = new Node(v);
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
void insertAtTail(Node *&head, Node *&tail, int v)
{
    Node *n = new Node(v);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    n->prev = tail;
    tail = n;
}
void insertAtPos(Node *head, Node *tail, int pos, int v)
{
    Node *n = new Node(v);
    Node *tmp = head;
    if (pos == sz(head))
    {
        insertAtTail(head, tail, v);
        return;
    }

    while (pos - 1 > 0)
    {
        tmp = tmp->next;
        pos--;
    }
    n->next = tmp->next;
    tmp->next = n;
    n->next->prev = n;
    n->prev = tmp;
}
void Display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void DisplayRev(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;
    
    while (Q--)
    {
        int x,v;
        cin >> x >> v;

        if(x>sz(head))
        {
            cout<<"Invalid"<<endl;
            continue;
        }
        else if (x == 0)
        {
            insertAthead(head,tail,v);
        }
        else if(x == sz(head))
        {
            insertAtTail(head,tail,v);
        }
        else
        {
            insertAtPos(head,tail,x,v);
        }
        cout << "L -> ";
        Display(head);
        cout << "R -> ";
        DisplayRev(tail);
    }
    return 0;
}

