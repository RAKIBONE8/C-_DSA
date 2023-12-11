// Question: Take a doubly linked list as input and sort it in ascending order. Then print the list.
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

int main()
{
    list<int> myList;

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        myList.push_back(v);
    }
    myList.sort();
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}