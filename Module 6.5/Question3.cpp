// Question: Take a singly linked list as input and print the middle element.
// If there are multiple values in the middle print both.
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
void MiddleEle(Node *&head, int size)
{
    Node *tmp = head;
    int mid = size / 2;
    int cnt = 1;
    while (cnt < mid - 1)
    {
        tmp = tmp->next;
        cnt++;
    }
    if (size % 2 == 0)
    {

        cout << tmp->next->val << " ";
        cout<<tmp->next->next->val<<endl;
    }
    else
    {
        cout << tmp->next->val << endl;
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
    MiddleEle(head, size);
    return 0;
}
