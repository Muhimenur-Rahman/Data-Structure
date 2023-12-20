#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int flag=0;
    for( i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)cout<<"YES";
    else cout<<"NO";
    return 0;
}