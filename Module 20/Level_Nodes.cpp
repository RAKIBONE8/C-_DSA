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

Node *tree_input()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

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

            if(myleft) q.push(myleft);
            if(myright) q.push(myright);
        }
        return root;
}
int depth(Node* root)
{
    if(root == NULL) return 0;

    int l = depth(root->left);
    int r = depth(root->right);

    return max(l,r) + 1;
}
void levelNodes(Node* root,int level)
{
    queue<pair<Node*,int>>q;
    q.push({root,0});

    while(!q.empty())
    {
        pair<Node*,int> p = q.front();
        Node* node = p.first;
        int l = p.second;
        q.pop();

        if(l>level) return;
        if(l == level)
        {
           cout<<node->val<<" ";
        }
        if(node->left)
        {
            q.push({node->left,l+1});
        }
        if(node->right)
        {
            q.push({node->right,l+1});
        }


    }
    
}


int main()
{
    Node* root = tree_input();
    int level;
    cin>>level;

    if (level >= depth(root))
    {
        cout<<"Invalid"<<endl;
        return 0;
    }
    levelNodes(root, level);
    return 0;
}