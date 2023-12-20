#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string x;
        getline(cin,x);
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}