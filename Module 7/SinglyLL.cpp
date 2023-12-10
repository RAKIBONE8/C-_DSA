#include<bits/stdc++.h>
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
void print(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<"->";
        tmp = tmp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    // Node a,b;
    // a.val = 10;
    // b.val = 20;
    // a.next = &b;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;

    print(head);

    return 0;
}