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
void insert_tail(Node *&head, Node*&tail, int val)
{
    Node *newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail=tail->next;
}
void singly_reverse(Node *&head,Node *cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }    
    singly_reverse(head,cur->next);
    cur->next->next=cur;
    cur->next = NULL; 
}
void print_linkedlist(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *newhead = NULL;
    Node *tail = NULL;
    Node *newtail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        else
        {
            insert_tail(head,tail,val);
            insert_tail(newhead,newtail,val);
        }
    }
    singly_reverse(newhead,newhead);
    Node *temp1 = head;
    Node *temp2 = newhead;
    bool flag = true;
    while(temp1!=NULL)
    {
        if(temp1->val!=temp2->val)
        {
            flag = false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(flag==true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}