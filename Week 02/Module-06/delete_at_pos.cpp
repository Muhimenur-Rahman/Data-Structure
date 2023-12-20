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
void insert_at_head(Node *&head,int v)
{
    Node *newnode = new Node(v);
    newnode->next=head;
    head = newnode;
    return;
}
void insert_at_tail(Node *&head,int v)
{
    Node *newnode = new Node(v);
    if(head==NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return;
}
void insert_at_any_pos(Node *head,int pos, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void print_linkedlist(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void delete_from_position(Node *head, int pos)
{
    Node *temp =head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    Node *delnode = temp->next;
    temp->next = temp->next->next;
    delete delnode;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        cout<<"Option-1: Insert at head"<<endl;
        cout<<"Option-2: Insert at tail"<<endl;
        cout<<"Option-3: Insert at any pos"<<endl;
        cout<<"Option-4: Delete form any position"<<endl;
        cout<<"Option-5: Print Linked List"<<endl;
        cout<<"Option-6: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            int v;
            cout<<"Enter your Value: ";
            cin>>v;
            insert_at_head(head,v);
            cout<<"Inserted at head."<<endl<<endl;
        }
        if(op==2)
        {
            int v;
            cout<<"Enter your Value: ";
            cin>>v;
            insert_at_tail(head,v);
            cout<<"Inserted at tail."<<endl<<endl;
        }
        if(op==3)
        {
            int pos,val;
            cout<<"Enter Your Value: ";
            cin>>val;
            cout<<"Enter Your Position: ";
            cin>>pos;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_at_any_pos(head,pos,val);
            }
            cout<<"Inserted "<<val<<" at "<<pos<<endl<<endl;
        }
        if(op==4)
        {
            int pos;
            cout<<"Enter Your Position to delete: ";
            cin>>pos;
            delete_from_position(head,pos);
            cout<<endl<<endl;
        }
        if(op==5)
        {
            cout<<"Your LInked List is: ";
            print_linkedlist(head);
            cout<<endl<<endl;
        }
        if(op==6)
        {
            break;
        }
    }
    return 0;
}