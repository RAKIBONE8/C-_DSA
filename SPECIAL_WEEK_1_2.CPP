// Binary Search
/*
#include<bits/stdc++.h>
using namespace std;
bool Binary_Search(int arr[],int n,int Target)
{
    int left = 0;
    int right = n-1;
    int mid;

    while(left<=right)
    {
        int mid =( left + right)/2;

        if(arr[mid] == Target)
        {
            return true;
        }
        else if(Target>arr[mid])
        {
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);

    if(Binary_Search(arr,n,7))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    return 0;
}
*/

// Linked List Operations
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
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    n->next = head;
    head = n;
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

    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = n;
    tail = n;
}
void Display(Node *head)
{
    Node *tmp = head;
    if (head == NULL)
    {
        cout << "No elements are Available" << endl;
        return;
    }
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertAtTail(head, tail, x);
    }
    insertAtHead(head,tail,5);
    insertAtTail(head,tail,9);
    Display(head);
    return 0;
}