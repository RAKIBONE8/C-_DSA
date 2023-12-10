// Question: Take a singly linked list as input and print the middle element.
// If there are multiple values in the middle print both.

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

void printMid(Node *head, int s)
{
    Node *tmp = head;
    int cnt = 1;
    while (cnt < s / 2)
    {
        tmp = tmp->next;
        cnt++;
    }
    if (s % 2 == 0)
    {
        cout << tmp->data << " " << tmp->next->data << endl;
    }
    else
    {
        cout << tmp->next->data << endl;
    }
}

int main()
{
    Node *head = NULL;
    int size = 0;
    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        insertAtTail(head, v);
        size++;
    }

    printMid(head, size);
    return 0;
}