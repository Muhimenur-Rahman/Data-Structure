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
            insert_tail(head, tail,val);
        }
    }
    int max = head->val;
    int min = head->val;
        for(Node *i = head->next;i!=NULL;i=i->next)
        {
            if(i->val>max)
            {
                max = i->val;
            }
            if(i->val<min)
            {
                min = i->val;
            }
        }
    cout<<max<<" "<<min;
    return 0;
}