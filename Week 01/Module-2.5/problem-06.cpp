#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,l,r,i,j;
    cin>>n>>q;
    vector<int>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=1;j<=q;j++)
    {
        cin>>l>>r;
        int sum=0;
        for(i=l-1;i<=r-1;i++)
        {
        sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
