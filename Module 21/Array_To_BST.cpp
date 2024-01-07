#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // Remove
        Node *f = q.front();
        q.pop();

        // Work
        cout << f->val << " ";

        // Push Children
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    cout << endl;
}
Node* convert(int arr[],int l,int r)
{
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(arr[mid]);

    Node* lft = convert(arr,l,mid-1);
    Node* rgt = convert(arr,mid+1,r);

    root->left = lft;
    root->right = rgt;
    return root;
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

    Node* root = convert(arr,0,n-1);
    levelOrder(root);
    
    return 0;
}
