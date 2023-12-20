#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st_1;
    stack<int>st_2;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        st_1.push(val);
    }
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int val;
        cin>>val;
        st_2.push(val);
    }
    bool flag = true;
    if(n!=m) flag = false;
    else
    {
        while(!st_1.empty())
        {
            if(st_1.top()!=st_2.top())
            {
                flag=false;
            }
            st_1.pop();
            st_2.pop();
        }
    }
   if(flag==true)cout<<"YES";
   else cout<<"NO";
    return 0;
}