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
void deleteHead(Node* &head)
{
    Node* temp = head;
    head = temp->next;
    delete temp;
}
void deletion(Node* &head,int pos)
{
    Node* temp  = head;
    if(pos == 0)
    {
        deleteHead(head);
        return;
    }
    int count =0;
    while(count<pos-1)
    {
        temp = temp->next;
        count++;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;

}
void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // deletion(head,3);
    deleteHead(head);
    Display(head);
    return 0;
}