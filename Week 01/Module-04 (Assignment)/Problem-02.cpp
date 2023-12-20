#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],pre[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pre[0]=a[0];
    for(i=1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<pre[i]<<" ";
    }
    return 0;
}