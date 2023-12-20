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
    }
    tail->next = newnode;
    tail=tail->next;
}
int size(Node *head)
{
    int count=0;
    Node *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void mid_element(Node *head, int size)
{
    Node *temp = head;
    if(size%2!=0)
    {
        for(int i=1;i<=(size/2);i++)
        {
          temp=temp->next;  
        }
        cout<<temp->val;
    }
    else
    {
        for(int i=1;i<=((size/2)-1);i++)
        {
          temp=temp->next;  
        }
        cout<<temp->val<<" "<<temp->next->val;
    }
}
int main()
{
    Node *head = NULL; 
    Node *tail = NULL; 
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)break;
        else
        {
            insert_tail(head,tail,val);
        }
    }
    int sz = size(head);
    mid_element(head,sz);
    return 0;
}