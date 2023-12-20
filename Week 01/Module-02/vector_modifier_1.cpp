#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1={1,2,3,4,5};
    vector<int>v2={1,2,3};
    vector<int>v3={10,20,30};
    v2=v1;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    v2.pop_back();
    cout<<"elements after pop_back";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
     cout<<endl;
    v3.insert(v3.begin()+2,9);
    cout<<"v3 elements:";
    for(int x:v3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v3.insert(v3.begin()+2,v1.begin(),v1.end());
    cout<<"v3 elements:";
    for(int x:v3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v3.erase(v3.begin());
    cout<<"v3 elements:";
    for(int x:v3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v3.erase(v3.begin()+1,v3.end()-2);
    cout<<"v3 elements:";
    for(int x:v3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}