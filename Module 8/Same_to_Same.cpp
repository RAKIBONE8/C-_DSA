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
void isSame(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    
    while ((tmp1 && tmp2) != NULL)
    {
        if (tmp1->data != tmp2->data)
        {
            cout << "NO" << endl;
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    cout << "YES" << endl;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    int s1 = 0;
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
    if(s1 != s2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    isSame(head1, head2);
    return 0;
}