// Question: Take a singly linked list as input, then print the maximum value of them.
#include<bits/stdc++.h>
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
void insertAtTail(Node* &head,int val)
{
    Node* n = new Node(val);
    
    if(head == NULL)
    {
        head = n;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
}
void MaxVal(Node* head)
{
    Node* tmp = head;
    int MAX = INT_MIN;

    while(tmp!=NULL)
    {
        if(tmp->data > MAX)
        {
            MAX = tmp->data;
        }
        tmp = tmp->next;
    }
    cout<<MAX<<endl;
}

int main()
{
    Node* head = NULL;

    while(true)
    {
        int v;
        cin>>v;

        if(v == -1)
        {
            break;
        }

        insertAtTail(head,v);
    }
    MaxVal(head);

    return 0;
}