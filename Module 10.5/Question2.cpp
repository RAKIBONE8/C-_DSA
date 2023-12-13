// Question: Take a doubly linked list as input and reverse it. After that print the linked list.
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node * prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtTail(Node *&head, Node *&tail, int val)
{
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
void Display(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
void RevList(Node* &head,Node* &tail)
{
    Node* front = head;
    Node* back = tail;
    while(front != back && front->next!=back)
    {
        swap(front->data,back->data);
        front = front->next;
        back = back->prev;
    }
    swap(front->data,back->data);
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(true)
    {
        int v;
        cin>>v;

        if(v == -1)
        {
            break;
        }
        insertAtTail(head,tail,v);
    }
    RevList(head,tail);
    Display(head);
    return 0;
}