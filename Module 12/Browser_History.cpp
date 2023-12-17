#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string data;
    Node *next;
    Node *prev;
    Node(string val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
bool Find(Node * head, Node * &curr, string s)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->data == s)
        {
            curr = tmp;
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}
void insertAtTail(Node *&head, Node *&tail, string s)
{
    Node *n = new Node(s);
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string s;
        cin >> s;

        if (s == "end")
        {
            break;
        }
        insertAtTail(head, tail, s);
    }

    Node *curr = head;
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string ds;
        cin >> ds;

        Node *tmp = curr;
        if (ds == "visit")
        {
            string s;
            cin >> s;
            if (Find(head,curr,s))
            {
                cout << s << endl;
            }
            else
            {
                cout << "Not Available" << endl;
                curr = tmp;
            }
        }
        else if (ds == "prev")
        {
            if (curr->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << curr->prev->data << endl;
                curr = curr->prev;
            }
        }
        else
        {
            if (curr->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << curr->next->data << endl;
                curr = curr->next;
            }
        }
    }
    return 0;
}