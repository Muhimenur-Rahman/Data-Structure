#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>a(n+m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int x;
    cin>>x;
    a.insert(a.begin()+x,b.begin(),b.end());
    for(int i=0;i<(n+m);i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}