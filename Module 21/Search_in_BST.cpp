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

        if (myleft)
            q.push(myleft);
        if (myright)
            q.push(myright);
    }
    return root;
}
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
    cout<<endl;
}
bool find_node(Node *root, int x)
{
    if (root == NULL)
        return false;

    if (root->val == x)
        return true;
    else if (root->val > x)
        return find_node(root->left, x);
    else
       return find_node(root->right, x);
}

int main()
{
    Node *root = tree_input();
    levelOrder(root);
    if(find_node(root,3))
    {
        cout<<"yes,found"<<endl;
    }
    else cout<<"Not found"<<endl;
    return 0;
}