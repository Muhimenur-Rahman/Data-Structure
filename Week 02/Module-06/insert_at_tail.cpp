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
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
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
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        int op;
        cout<<"Option 1 : Insert at tail"<<endl;
        cout<<"Option 2 : Print Linked list"<<endl;
        cout<<"Option 3 : Terminate"<<endl;
        cin>>op;
        if(op==1)
        {
            cout<<"insert your value: ";
            int v;
            cin>>v;
            insert_tail(head,v);
        }
        
        else if(op==2)
        {
            cout<<"Your linked list is: ";
            print_linked_list(head);
            cout<<endl;
        }
        else if(op==3)
        {
            break;
        }
    }
    return 0;
}