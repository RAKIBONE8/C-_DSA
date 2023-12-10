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
void insertAtTail(Node* &head,Node* &tail,int val)
{
    Node* n = new Node(val);
    if(head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    tail = n;
}
void print(Node *head) // O(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << "->";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insertAtTail(head,tail,val);
    }

    print(head);
    
    return 0;
}