#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,1,4,2,4,1,2,2,6,8};
    replace(v.begin(),v.end(),2,50);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    it = find(v.begin(),v.end(),4);
    cout<<*it<<endl;
    //Another method



    auto it_1 = find(v.begin(),v.end(),4);
    if(it_1==v.end())
    {
        cout<<"NOT FOUND";
    }
    else
    {
        cout<<"FOUND";
    }    
    return 0;
}