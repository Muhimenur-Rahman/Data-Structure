#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val)
    {
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
class Stack
{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if(head==NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev=tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *delnode = tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
        }
        else
        {
            tail->next=NULL;
        } 
        delete delnode;
    }
    int top()
    {
        return tail->val;
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
class Queue
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
        newnode->prev=tail;
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
            delete delnode;
            return;
        }
        head->prev=NULL;
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
    int n,m;
    cin>>n>>m;
    Stack s;
    Queue q;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        s.push(val);
    }
    for(int i=1;i<=m;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    bool flag = true;
    if(s.size()!=q.size())
    {
        flag = false;
    }
    else
    {
        while(!s.empty())
        {
            if(s.top()!=q.front()) flag=false;
            s.pop();
            q.pop();
        }
    }
    if(flag == true) cout<<"YES";
    else cout<<"NO";
}