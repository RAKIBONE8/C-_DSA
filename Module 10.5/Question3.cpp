// Question: Take a doubly linked list as input and check if it forms any palindrome or not.
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node* prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

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
void Display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
bool is_Palindrome(Node* head,Node* tail,int s)
{
    while(s/2>0)
    {
        if(head->data != tail->data)
        {
            return false;
        }
        head = head->next;
        tail = tail->prev;
        s--;
    }
    return true;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(true)
    {
        int v;
        cin>>v;

        if(v == -1)
        {
            break;
        }
        insertAtTail(head,tail,v);
    }

    if(is_Palindrome(head,tail,size(head)))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}