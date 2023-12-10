/*
Question: Take a singly linked list as input,
then take q queries.
In each query you will be given an index and value.
You need to insert those values in the given index and print the linked list.
If the index is invalid print “Invalid”.
*/
#include <bits/stdc++.h>
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
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}
void insertAtPosition(Node *&head, int val, int index)
{
    Node *n = new Node(val);
    Node *tmp = head;
    if (index == 0)
    {
        insertAtHead(head, val);
        return;
    }
    int cnt = 0;
    while (cnt < index - 1)
    {
        tmp = tmp->next;
        cnt++;
    }
    if (tmp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    n->next = tmp->next;
    tmp->next = n;
}
void Display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << "->";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
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
    int query;
    cin >> query;
    while (query--)
    {
        int index;
        cin >> index;
        int val;
        cin >> val;

        insertAtPosition(head, val, index);
        Display(head);
    }
    return 0;
}