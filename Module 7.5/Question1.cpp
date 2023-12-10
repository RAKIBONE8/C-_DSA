// Question: Take two singly linked lists as input and check if their sizes are same or not.
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

int main()
{
    Node *head1 = NULL;
    int s1 = 0;
    Node *head2 = NULL;
    int s2 = 0;

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        insertAtTail(head1, v);
        s1++;
    }

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        insertAtTail(head2, v);
        s2++;
    }

    if (s1 == s2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}