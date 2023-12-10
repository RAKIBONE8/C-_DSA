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
void print(Node *head) // O(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << "->";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}
int size(Node *head) // O(n)
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
void insertAtPosition(Node *&head, int pos, int val) // O(n)
{
    Node *n = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++) // O(n)
    {
        tmp = tmp->next;
    }
    n->next = tmp->next;
    tmp->next = n;
}
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
    }

    tail->next = n;
    tail = n;
}
int main()
{
    // Node a,b;
    // a.val = 10;
    // b.val = 20;
    // a.next = &b;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    print(head);

    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid index" << endl;
    }
    else if (pos == 0)
    {
        insertAtHead(head, val);
    }
    else if(pos == size(head))
    {
        insertAtTail(head,tail,val);
    }
    else
    {
        insertAtPosition(head, pos, val);
    }

    print(head);

    return 0;
}