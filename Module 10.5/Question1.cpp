// Question: Take two doubly linked lists as input and check if they are the same or not.
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    n->prev = tail;
    tail = tail->next;
}
void RevDisplay(Node *tail)
{
    Node *tmp = tail;
    while (tail != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void Display(Node *head)
{
    if (head == NULL)
    {
        cout << "There is No element in the list" << endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
bool isSame(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->data != tmp2->data)
        {
            return false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return true;
}
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        insertAtTail(head1, tail1, v);
    }

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        insertAtTail(head2, tail2, v);
    }

    if (size(head1) == size(head2))
    {
        if (isSame(head1, head2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}