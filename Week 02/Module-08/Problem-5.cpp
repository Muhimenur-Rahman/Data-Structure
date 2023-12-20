#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node *&head,Node *&tail,int val)
{
    Node *newnode = new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
void insert_at_head(Node *&head, int val)
{
    Node *newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int x;
    cin >> x;
    for (int i=1;i<=x;i++)
    {
        int v,val;
        cin>>v>>val;
        if (head==NULL)
        {
            insert_tail(head,tail,val);
            cout<<head->val<<" "<<tail->val<<endl;
        }
        else
        {
            if (v==0)
            {
                insert_at_head(head,val);
                cout<<head->val<<" "<<tail->val<<endl;
            }
            else if (v==1)
            {
                insert_tail(head,tail,val);
                cout<<head->val<<" "<<tail->val<<endl;
            }
        }
    }
    return 0;
}
