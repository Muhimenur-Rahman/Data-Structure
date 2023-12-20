#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *right;
    Node *left;
    Node(int val)
    {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};
Node *input()
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
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        // jabotiyo kaj
        int l, r;
        cin >> l >> r;
        Node *newLeft;
        Node *newRight;
        if (l == -1)
        {
            newLeft = NULL;
        }
        else
        {
            newLeft = new Node(l);
        }
        if (r == -1)
        {
            newRight = NULL;
        }
        else
        {
            newRight = new Node(r);
        }
        p->left = newLeft;
        p->right = newRight;
        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
    return root;
}
void mx_mn_node(Node *root, int &mx, int &mn)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        if(mn>root->val) mn = root->val;
        if(mx<root->val) mx = root->val;
    }
    mx_mn_node(root->left,mx,mn);    
    mx_mn_node(root->right,mx,mn);    
}
int main()
{
    int mx = INT_MIN;
    int mn = INT_MAX;
    Node *root = input();
    mx_mn_node(root,mx,mn);
    cout<<mx<<" "<<mn;
    return 0;
}