// Question: Take a singly linked list as input and print the size of the linked list.
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
void insertAtTail(Node* &head,int val)
{
    Node* n = new Node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }
    Node* tmp = head;
    while(tmp->next!= NULL)
    {
        tmp = tmp->next;

    }
    tmp->next = n;
    
}

int main()
{
    Node* head = NULL;
    int cnt = 0;
    while(true)
    {
        int v;
        cin>>v;
        if(v == -1)
        {
            break;
        }
       
        insertAtTail(head,v);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}