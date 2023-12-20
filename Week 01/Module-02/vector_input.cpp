#include<bits/stdc++.h>
using namespace std;
int main()
{
    //method-1
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    //method-02
    int n;
    cin>>n;
    vector<int>v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}