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
    int count = 0;
    for(i=0;i<n;i++)
    {
        auto it = find(v.begin(),v.end(),v[i]+1);
        if(it!=v.end())
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}