// Question: Take a singly linked list as input and print the reverse of the linked list.
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
// void insertAtHead(Node *&head, int val)
// {
//     Node *n = new Node(val);
//     Node *tmp = head;

//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     n->next = head;
//     head = n;
// }
void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    Node *tmp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = n;
}
void RevPrint(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        return;
    }
    RevPrint(tmp->next);
    cout << tmp->data << " ";
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

    RevPrint(head);
    cout << endl;
    return 0;
}