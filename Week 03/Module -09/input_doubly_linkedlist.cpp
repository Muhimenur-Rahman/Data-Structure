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
void print_normal(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }  
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
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
        else
        {
            insert_at_tail(head,tail,val);
        }
    }
    print_normal(head);
    cout<<endl;
    print_reverse(tail);
    return 0;
}