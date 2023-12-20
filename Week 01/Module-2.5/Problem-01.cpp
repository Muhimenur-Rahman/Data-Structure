#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    c=b;
    c.insert(c.begin()+n,a.begin(),a.end());
    for(i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}