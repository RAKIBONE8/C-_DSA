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
void insertAtTail(Node *&head,Node* & tail, int val)
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
void searchX(Node *head, int x)
{
    Node *tmp = head;
    if (head == NULL)
    {
        cout << "-1" << endl;
        return;
    }
    int index = 0;
    while (tmp != NULL)
    {
        if (tmp->data == x)
        {
            cout << index << endl;
            return;
        }
        index++;
        tmp = tmp->next;
        
    }
    cout << "-1" << endl;
}
void Display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}
int main()
{

    int testCase;
    cin >> testCase;
    while (testCase --)
    {
        Node *head = NULL;
        Node* tail = NULL;
        int v;
        while (true)
        {
           
            cin >> v;

            if (v == -1)
            {
                break;
            }
            insertAtTail(head,tail, v);
        }
        int x;
        cin >> x;
        searchX(head, x);
        // while (true)
        // {
        //     int v;
        //     cin >> v;

        //     if (v == -1)
        //     {
        //         break;
        //     }
        //     insertAtTail(head, v);
        // }
        // Display(head);
        
    }
    return 0;
}