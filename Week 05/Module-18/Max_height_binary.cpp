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
int max_height(Node *root)
{
    if(root == NULL) return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    if(l>r) return l + 1;
    else return r + 1;
}
int main()
{
    Node *root = input();
    int nodes = max_height(root);
    cout << nodes;
    return 0;
}