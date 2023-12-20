#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,x,i,j;
    cin>>n>>q;
    vector<int>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=1;j<=q;j++)
    {
        cin>>x;
        auto it=find(a.begin(),a.end(),x);
        if(it!=a.end())
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
    return 0;
}