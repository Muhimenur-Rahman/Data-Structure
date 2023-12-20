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
int count(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
int main()
{
    Node *a_head = NULL;
    Node *a_tail = NULL;
    Node *b_head = NULL;
    Node *b_tail = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val == -1) break;
        insert_at_tail(a_head,a_tail,val);
    }
    while (true)
    {
        int val;
        cin>>val;
        if(val == -1) break;
        insert_at_tail(b_head,b_tail,val);
    }
    int size_a = count(a_head);
    int size_b = count(b_head);
    bool flag =true;
    if(size_a != size_b)
    {
        flag = false;
    }
    else
    {
        while(a_head!=NULL)
        {
            if(a_head->val!=b_head->val)
            {
                flag = false;
            }
            a_head = a_head->next;
            b_head = b_head->next;
        }
    }
    if(flag==true)cout<<"YES";
    else cout<<"NO";
    return 0;
}