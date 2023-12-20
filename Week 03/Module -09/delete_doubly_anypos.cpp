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
void delete_any_pos(Node *head, int pos)
{
    Node *temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp =temp->next;
    }
    Node *delnode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete delnode;
}
void delete_head(Node *&head, Node *&tail)
{
    Node *delnode = head;
    head = head->next;
    if(head==NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
    delete delnode;
}
void delete_tail(Node *&head, Node *&tail)
{
    Node *delnode = tail;
    tail = tail->prev;
    delete delnode;
    if(tail==NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
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
    Node *head =new Node(10);
    Node *tail =head;
    int sz = size(head);
    int pos;
    cin>>pos;
    if(pos==0)
    {
        delete_head(head,tail);
    }
    else if(pos == sz-1)
    {
        delete_tail(head,tail);
    } 
    else if(pos >=sz)
    {
        cout<<"INVALID"<<endl;
    }
    else
    {
        delete_any_pos(head, pos);
    }
    print_normal(head);
    cout<<endl;
    print_reverse(tail);
    return 0;
}