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

void insertAtTail(Node *&head,Node* &tail, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }

    Node *tmp = tail;
    tail->next = n;
    tail = tail->next;
}
void minMax(Node *head)
{
    if(head == NULL)
    {
        cout<<"0"<<endl;
        return;
    }
    int MAX = head->data;
    int MIN = head->data;

    while (head != NULL)
    {
        if (head->data > MAX)
        {
            MAX = head->data;
        }
        else if (head->data < MIN)
        {
            MIN = head->data;
        }

        head = head->next;
    }

    cout << MAX - MIN << endl;
}
int main()
{
    Node *head = NULL;
    Node* tail = NULL;

    int v;
    while (cin >> v && v != -1)
    {
        insertAtTail(head,tail, v);
    }

    minMax(head);

    return 0;
}