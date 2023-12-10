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
        this->next = NULL;
    }
};
void InserAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL) // Base Case
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void Display(Node *head)
{
    Node *temp = head;
    cout<<"Your Linked List :";
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value" << endl;
            int v;
            cin >> v;
            InserAtTail(head, v);
        }
        else if (op == 2)
        {
            Display(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
    return 0;
}