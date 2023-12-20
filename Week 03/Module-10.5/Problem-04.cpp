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
void insert_any_pos(Node *head,int pos, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp = temp->next; 
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next->prev=newnode;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    head->prev=newnode;
    newnode->next = head;
    head = newnode;
}
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
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count ++;
        temp = temp->next;
    }
    return count;
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
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int sz = size(head);
        int pos,val;
        cin>>pos>>val;
        if(pos==0)
        {
            insert_at_head(head,tail,val);
            print_normal(head);
            cout<<endl;
            print_reverse(tail);
            cout<<endl;
        }
        else if(pos == sz)
        {
            insert_at_tail(head,tail,val);
            print_normal(head);
            cout<<endl;
            print_reverse(tail);
            cout<<endl;
        }
        else if(pos > sz)
        {
            cout<<"INVALID"<<endl;
        }
        else
        {
            insert_any_pos(head, pos,val);
            print_normal(head);
            cout<<endl;
            print_reverse(tail);
            cout<<endl;
        }
   }
    
    return 0;
}