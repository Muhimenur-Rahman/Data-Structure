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
    Node *root1 = input();
    Node *root2 = input();
    queue<Node*>q1;  
    queue<Node*>q2;
    vector<int>v1;  
    vector<int>v2;
      if(root1) q1.push(root1);  
      if(root2) q2.push(root2);
      if((root1->left==NULL)&&(root1->right==NULL)&&(root2->left==NULL)&&(root2->right==NULL)) 
      {
        if(root1->val!=root2->val) return false;
        else return true;
      }
      while(!q1.empty())
      {
            Node* f1 = q1.front();
            q1.pop();
            if((f1->left==NULL)&&(f1->right==NULL)) v1.push_back(f1->val);
            if(f1->left) q1.push(f1->left); 
            if(f1->right) q1.push(f1->right); 
      }
      while(!q2.empty())
      {
            Node* f2 = q2.front();
            q2.pop();
            if((f2->left==NULL)&&(f2->right==NULL)) v2.push_back(f2->val);
            if(f2->left) q2.push(f2->left); 
            if(f2->right) q2.push(f2->right); 
      }
      for(int i = 0; i<=v1.size();i++)
      {
        cout<<v1[i]<<" ";
      }
      for(int i = 0; i<=v2.size();i++)
      {
        cout<<v2[i]<<" ";
      }
    return 0;
}