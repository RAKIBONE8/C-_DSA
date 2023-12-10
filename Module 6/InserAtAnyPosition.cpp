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
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
} 
void insertAtPosition(Node* &head,int val,int pos)
{
    Node* tmp = head;
    Node* n = new Node(val);
    int count = 0;
    while(count<pos-1)
    {
        tmp = tmp->next;
        count++;   
    }
    n->next = tmp->next;
    tmp->next = n;
}
void Display(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;
    while(true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;
        cout << "Option 4: Inser at Position" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value :";
            int v;
            cin >> v;
            cout<<endl;
            insertAtTail(head, v);
        }
        else if (op == 2)
        {
            Display(head);
        }
        else if (op == 3)
        {
            break;
        }
        else if(op == 4)
        {
            cout<<"Enter the value :";
            
            int v;
            cin>>v;
            cout << endl;
            cout<<"Enter the index : ";
            int p;
            cin>>p;
            cout<<endl;
            insertAtPosition(head,v,p);
        }
    }
    return 0;
}