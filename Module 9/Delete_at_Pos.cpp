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
void Display_Reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void Display_Normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}

void delete_at_head(Node *&head,Node* &tail)
{

    Node *todelete = head;
    head = head->next;
    delete todelete;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void delete_tail(Node* &head,Node *&tail)
{
    Node *todelete = tail;
    tail = tail->prev;
    delete todelete;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_at_pos(Node *&head, Node *&tail, int pos)
{
    Node *tmp = head;
    if (pos == 0)
    {
        delete_at_head(head,tail);
        return;
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(head,tail);
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *todelete = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete todelete;
}
int main()
{
    Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    Node *c = new Node(40);

    Node *tail = c;
    // head->next = a;
    // a->prev = head;
    // a->next = b;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;

    Display_Normal(head);
    int pos;
    cin >> pos;

    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if(pos == 0)
    {
        delete_at_head(head,tail);
    }
    else if(pos == size(head)-1)
    {
        delete_tail(head,tail);
    }
    else
    {
        delete_at_pos(head,tail,pos);
    }


    Display_Normal(head);
    Display_Reverse(tail);
    return 0;
}