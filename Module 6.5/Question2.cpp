/*
Question : Take a singly linked list as input
and check if the linked list contains any duplicate value.
You can assume that the maximum value will be 100.
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
bool Freq(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *temp = head->next;
    while (temp != NULL)
    {
        if (head->val == temp->val)
        {
            return true;
        }
        temp = temp->next;
    }
    Freq(head->next);
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

    if (Freq(head))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}