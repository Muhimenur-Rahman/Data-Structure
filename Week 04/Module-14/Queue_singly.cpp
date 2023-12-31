#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myQueue
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void pop()
    {
        sz--;
        Node *delnode = head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
        }
        delete delnode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)return true;
        else return false;
    }
};
int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}