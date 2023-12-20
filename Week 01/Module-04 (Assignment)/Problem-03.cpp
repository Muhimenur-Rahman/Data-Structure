#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
    long long int n,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int flag=1;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;;
    }
    return 0;
}