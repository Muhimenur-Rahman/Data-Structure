#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,x,i,j;
    cin>>n>>q;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1;i<=q;i++)
    {
        int l=0;
        int r=n-1;
        int mid;
        int flag=0;
        cin>>x;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(a[mid]==x)
            {
                flag=1;
                break;
            }
            else
            {
               if(a[mid]>x)
               {
                  r=mid-1;
               }
               if(a[mid]<x)
               {
                l=mid+1;
               }
            }
        }  
         if(flag==1)cout<<"found"<<endl;
         else cout<<"not found"<<endl;
    }
    return 0;
}