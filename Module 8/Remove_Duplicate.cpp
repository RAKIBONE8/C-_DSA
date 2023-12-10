#include <bits/stdc++.h>
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
void Display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void RemoveDuplicate(Node *&head)
{
    Node * tmp = head;
    
    while(tmp!= NULL && tmp->next!=NULL)
    {
        Node *prev = tmp;
        Node *curr = tmp->next;
        while(prev->next!=NULL)
        {
            if(curr->data == tmp->data)
            {
                Node* next = curr->next;
                Node* todelete = curr;
                prev->next = next;
                curr = next;

               delete todelete;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        tmp = tmp->next;
    }
    
}


int main()
{
    Node *head = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        insertAtTail(head, v);
    }
    RemoveDuplicate(head);
    Display(head);

    return 0;
}