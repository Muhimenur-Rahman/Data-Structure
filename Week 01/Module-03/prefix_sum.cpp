#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q,l,r,i,j;
    cin>>n>>q;
    vector<long long int>a(n);
    vector<long long int>pre;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int sum=0;
    for( i=0;i<n;i++)
    {
        sum=sum+a[i];
        pre.push_back(sum);
    }
    for(j=1;j<=q;j++)
    {
        cin>>l>>r;
        l--;
        r--;
        long long int ans;
        if(l==0)
        {
            ans=pre[r]-0;
        }
        else
        {
            ans=pre[r]-pre[l-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}
