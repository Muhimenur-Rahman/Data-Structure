#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,m;
    cin>>n>>m;
    stack<int>s;
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        s.push(val);
    }
    for(int i=1;i<=m;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
   bool flag = true;
    if(s.size()!=q.size())
    {
        flag = false;
    }
    else
    {
        while(!s.empty())
        {
            if(s.top()!=q.front()) flag=false;
            s.pop();
            q.pop();
        }
    }
    if(flag == true) cout<<"YES";
    else cout<<"NO";
}