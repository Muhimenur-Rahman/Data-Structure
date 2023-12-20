#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>::iterator it_1;
    for(it_1=v.begin();it_1<v.end();it_1++)
    {
        cout<<*it_1<<" ";
    }
    cout<<endl;
    for(auto it_2=v.begin();it_2<v.end();it_2++)
    {
        cout<<*it_2<<" ";
    }
    cout<<endl;
    return 0;
}