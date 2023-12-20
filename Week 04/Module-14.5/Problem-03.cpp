#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>mySt;
    stack<int>newSt;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        mySt.push(val);
    }
    while(!mySt.empty())
    {
        newSt.push(mySt.top());
        mySt.pop();
    }
    while(!newSt.empty())
    {
        cout<<newSt.top()<<" ";
        newSt.pop();
    }
    return 0;
}