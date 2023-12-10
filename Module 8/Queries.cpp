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
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}
void deleteAtHead(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *tmp = head;
    head = head->next;
    delete tmp;
}
void DeleteAtPos(Node *&head, int index)
{
    Node *tmp = head;
    if (index == 0)
    {
        deleteAtHead(head);
        return;
    }
    int cnt = 0;
    while (cnt < index - 1)
    {
        tmp = tmp->next;
        cnt++;
    }
    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }
    Node *todelete = tmp->next;
    tmp->next = tmp->next->next;
    delete todelete;
}

int main()
{
    Node *head = NULL;

    int Q;
    cin >> Q;
    int len = 0;
    while (Q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insertAtHead(head, v);
            len++;
        }
        else if (x == 1)
        {
            insertAtTail(head, v);
            len++;
        }
        else
        {
            if (v > len)
            {
                Display(head);
                continue;
            }
            else
            {
                DeleteAtPos(head, v);
                len--;
            }
        }
        Display(head);
    }
    
    return 0;
}