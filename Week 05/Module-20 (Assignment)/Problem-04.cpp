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

int main()
{
    Node *root = input();
    int x;
    cin>>x;
    queue<pair<Node*,int>>q;
    int max_level = INT_MIN;
    if(root) q.push({root,0});
    while(!q.empty())
    {
        pair<Node*,int>pr = q.front();
        Node *f = pr.first;
        int level = pr.second;
        q.pop();
        max_level = max(max_level,level);
        if(f->left) q.push({f->left,level+1});
        if(f->right) q.push({f->right,level+1});
    }
    if(root) q.push({root,0});
    while(!q.empty())
    {
        if(x>max_level)
        {
            cout<<"Invalid";
            break;
        }
        pair<Node*,int>pr = q.front();
        Node *f = pr.first;
        int level = pr.second;
        q.pop();
        if(level==x)
        {
            cout<<f->val<<" ";
        }
        if(f->left) q.push({f->left,level+1});
        if(f->right) q.push({f->right,level+1});
    }
    return 0;
}