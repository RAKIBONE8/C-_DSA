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
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *tmp = head;
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
    n->prev = tmp;
    n->next = NULL;
}
void RevDoubly(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        swap(i->data, j->data);
        i = i->next;
        j = j->prev;
    }
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
int main()
{

    // Create Node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    // Link Node With Previous and Next Node
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    // Call Insert Function
    // insert(head, tail, 0, 600);

    // Call Delete Node Function

    // Print Function Call

    RevDoubly(head, tail);
    Display(head);
    return 0;
}