#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]>0)v[i]=1;
        if(v[i]<0)v[i]=2;
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}