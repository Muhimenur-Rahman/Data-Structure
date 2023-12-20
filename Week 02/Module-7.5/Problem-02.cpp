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
void print_reverese(Node *n)
{
    if(n==NULL)return;
    print_reverese(n->next);
    cout<<n->val<<" ";
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
    print_reverese(head);
    return 0;
}