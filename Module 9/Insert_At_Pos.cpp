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
void insert_at_pos(Node *&head, int pos, int val)
{
    Node *n = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    n->next = tmp->next; // 100->30
    tmp->next = n;       // 20->100;
    n->next->prev = n;   // 100<-30
    n->prev = tmp;       // 20<-100
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
void insert_at_Head(Node* &head,Node* &tail,int val)
{
    Node* n = new Node(val);
    if(head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;

}
void insert_at_Tail(Node* &tail,Node* &head,int val)
{
    Node* n = new Node(val);
    if(tail == NULL)
    {
        insert_at_Head(head,tail,val);
        return;
    }
    n->prev = tail;
    tail->next = n;
    tail = n;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    Node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos, val;
    cin >> pos >> val;
    if(pos == 0)
    {
        insert_at_Head(head,tail,val);
    }
    else if(pos == size(head))
    {
        insert_at_Tail(tail,head,val);
    }
    else if(pos>size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        insert_at_pos(head,pos,val);
    }

    insert_at_pos(head, 2, 100);
    Display_Normal(head);
    Display_Reverse(tail);
    return 0;
}