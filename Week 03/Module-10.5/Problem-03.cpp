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
    Node *i = head;
    Node *j = tail;
    bool flag = true;
    while((i!=j)&&(i->next!=j))
    {
        if(i->val!=j->val)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val!=j->val)
    {
        flag = false;
    }
    if(flag==true) cout<<"YES";
    if(flag==false) cout<<"NO";
    return 0;
}