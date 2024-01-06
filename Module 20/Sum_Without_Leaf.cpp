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
Node* tree_input()
{
    int val;
    cin>>val;
    Node* root;
    if(val == -1) 
    root = NULL;
    else root = new Node(val);

    queue<Node *>q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l == -1)
        {
            myleft = NULL;
        }
        else myleft = new Node(l);

        if(r == -1)
        {
            myright = NULL;
        }
        else myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if(myleft) q.push(myleft);
        if(myright) q.push(myright);

        
    }
    return root;

}
int SumExceptLeaf(Node* root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL)
    return 0;

    int l = SumExceptLeaf(root->left);
    int r = SumExceptLeaf(root->right);
    return l+r+root->val;
}

int main()
{
    Node* root = tree_input();
    cout<<SumExceptLeaf(root)<<endl;
    return 0;
}