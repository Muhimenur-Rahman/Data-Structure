#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node *prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail,int val)
{
    Node *newnode = new Node(val);
    if(tail==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    tail = newnode;
}
void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }  
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);
    }
    for(Node *i = head; i->next!=NULL; i=i->next)
    {
        for(Node *j = i->next; j!=NULL; j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    print(head);
    return 0;
}