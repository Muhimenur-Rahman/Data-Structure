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
void doubly_reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while((i!=j)&&(i->next!=j))
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
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
    doubly_reverse(head,tail);
    print_normal(head);
    return 0;
}