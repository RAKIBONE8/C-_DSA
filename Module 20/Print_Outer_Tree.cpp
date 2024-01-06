#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    
};
Node *tree_input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);

        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
vector<int> v1;
void leftOuter(Node* root)
{
    if(root == NULL) return;
    if(root->left) leftOuter(root->left);
    else leftOuter(root->right);
    v1.push_back(root->val);
}
vector<int> v2;
void rightOuter(Node* root)
{
    if (root == NULL)
        return;
    v2.push_back(root->val);
    if (root->right)
        rightOuter(root->right);
    else
        rightOuter(root->left);
    
}

int main()
{
    Node* root = tree_input();
    leftOuter(root->left);
    rightOuter(root->right);

    for(int val : v1)
    {
        cout<<val<<" ";
    }
    cout<<root->val<<" ";
    for(int val :v2)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}