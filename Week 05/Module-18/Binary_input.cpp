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
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout<<"No tree";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // Line er first ke ber kore ana
        Node *f = q.front();
        q.pop();
 
        // jabotiyo kaj kora
        cout << f->val << " ";

        // children ke push kora
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}
int main()
{
    Node *root = input();
    level_order(root);
    return 0;
}