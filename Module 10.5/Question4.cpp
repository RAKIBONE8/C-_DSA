// Question: You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”.
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
void insertAtHead(Node *&head, Node *&tail, int v)
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
void insertAtPos(Node *&head, Node *&tail, int pos, int val)
{
    Node *n = new Node(val);
    if (pos == 0)
    {
        insertAtHead(head, tail, val);
        return;
    }
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    n->next = tmp->next;
    tmp->next = n;
    n->next->prev = n;
    n->prev = tmp;
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
void Display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void RevDisplay(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {

        int x, val;
        cin >> x >> val;

        if (x == 0)
        {
            insertAtHead(head, tail, val);
            Display(head);
            RevDisplay(tail);
        }
        else if (x == size(head))
        {
            insertAtTail(head, tail, val);
            Display(head);
            RevDisplay(tail);
        }
        else if (x > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insertAtPos(head, tail, x, val);
            Display(head);
            RevDisplay(tail);
        }
        
    }
    return 0;
}