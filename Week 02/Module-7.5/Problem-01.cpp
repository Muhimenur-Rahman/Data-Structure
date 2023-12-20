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
int main()
{
    Node *a_head = NULL;
    Node *b_head = NULL;
    Node *a_tail = NULL;
    Node *b_tail = NULL;
    int a_val,b_val;
    while(true)
    {
        cin>>a_val;
        if(a_val == -1)break;
        else
        {
            insert_tail(a_head, a_tail,a_val);
        }
    }
    while(true)
    {
        cin>>b_val;
        if(b_val == -1)break;
        else
        {
            insert_tail(b_head, b_tail,b_val);
        }
    }
    int size_a = size(a_head);
    int size_b = size(b_head);
    if(size_a == size_b)cout<<"YES";
    else cout<<"NO";
    return 0;
}