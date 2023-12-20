#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>myQ;
    queue<int>newQ;
    stack<int>mySt;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        myQ.push(val);
    }
    while(!myQ.empty())
    {
        mySt.push(myQ.front());
        myQ.pop();
    }
    while(!mySt.empty())
    {
        newQ.push(mySt.top());
        mySt.pop();
    }
    while(!newQ.empty())
    {
        cout<<newQ.front()<<" ";
        newQ.pop();
    }
    return 0;
}