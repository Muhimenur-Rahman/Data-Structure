#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int p=0,q=n-2;
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=p;j++)
        {
            cout<<" ";
        }
        cout<<"\\";
        for(j=1;j<=q;j++)
        {
            cout<<" ";
        }
        cout<<"/";
        cout<<endl;
        p++;
        q=q-2;
    }
    for(j=1;j<=p;j++)
    {
        cout<<" ";
    }
    cout<<"X"<<endl;
    int r=(n/2)-1;
    int s=1;
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=r;j++)
        {
            cout<<" ";
        }
        cout<<"/";
        for(j=1;j<=s;j++)
        {
            cout<<" ";
        }
        cout<<"\\";
        cout<<endl;
        r--;
        s=s+2;
    }
    return 0;
}