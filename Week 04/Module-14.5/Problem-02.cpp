#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>myStack;
    queue<int>myQueue;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        myStack.push(val);
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int val;
        cin>>val;
        myQueue.push(val);
    }
    bool flag = true;
    if(n!=m) flag = false;
    else
    {
        while(!myStack.empty())
        {
            if(myStack.top()!=myQueue.front())
            {
                flag=false;
            }
            myStack.pop();
            myQueue.pop();
        }
    }
   if(flag==true)cout<<"YES";
   else cout<<"NO";
    return 0;
}