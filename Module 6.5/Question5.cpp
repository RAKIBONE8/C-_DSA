// Question : Take a singly linked list as input and check if the linked list is sorted in ascending order.
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
}
void is_sorted(Node* head)
{
    Node* tmp = head;
    int flag = 1;
    while(tmp->next!=NULL)
    {
        if((tmp->val)>(tmp->next->val))
        {
            flag = 0 ;
            break;
        }
        tmp=tmp->next;
    }
    if(flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
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
    is_sorted(head);
    return 0;
}