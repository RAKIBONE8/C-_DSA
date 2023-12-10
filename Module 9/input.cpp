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
void insert_at_Tail(Node *&tail, Node *&head, int val)
{
    Node *n = new Node(val);
    if (tail == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    n->prev = tail;
    tail->next = n;
    tail = n;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while(true)
    {
        cin>>val;
        if(val == -1) break;

        insert_at_Tail(tail,head,val);
    }

    Display_Normal(head);
    Display_Reverse(tail);
    return 0;
}