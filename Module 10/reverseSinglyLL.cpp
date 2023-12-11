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
    Node* tmp = head;
    if(head == NULL)
    {
        head = n;
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
}
void Revll(Node* &head,Node* curr)
{
    if(curr->next == NULL)
    {
        head = curr;
        return;
    }
    Revll(head,curr->next);
    curr->next->next = curr;
    curr->next = NULL;

}
// void Revll(Node* &head)
// {
//     Node* curr = head;
//     if(curr->next == NULL)
//     {
//         head = curr;
//         return;
//     }
//     Revll(curr->next);
//     curr->next->next = curr;
//     curr->next = NULL;
// }
void Display(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
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
            break;;
        }
        insertAtTail(head,v);
    }
    // Revll(head,head);
    Revll(head,head);
    Display(head);
    return 0;
}