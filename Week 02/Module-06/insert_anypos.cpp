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
void insert_tail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if(head==NULL)
    {
        head=newnode;
        cout<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;
    return;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
void insert_any_pos(Node *head,int pos, int val)
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
int main()
{
    Node *head = NULL;
    while(true)
    {
        int op;
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Insert at any position"<<endl;
        cout<<"Option 4: Terminate"<<endl;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter Your Value: ";
            int v;
            cin>>v;
            insert_tail(head,v);
            
        }
        if(op==2)
        {
            cout<<"Your Linked List is: ";
            print_linked_list(head);
        }
        if(op==3)
        {
            int pos;
            int val;
            cout<<"Enter your index position: ";
            cin>>pos;
            cout<<"Enter your value: ";
            cin>>val;
            insert_any_pos(head,pos,val);
        }
        if (op==4)
        {
            break;
        }
    }
    return 0;
}