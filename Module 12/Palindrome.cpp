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
    tail = n;
}
void isPalindrome(Node *head, Node *tail)
{
    Node *tmp1 = head;
    Node *tmp2 = tail;

    while (tmp1 != tmp2 && tmp1->next != tmp2)
    {
        if (tmp1->data != tmp2->data)
        {
            cout<<"NO"<<endl;
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }
    if(tmp1->data != tmp2->data)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        insertAtTail(head, tail, v);
    }
    isPalindrome(head,tail);

    return 0;
}