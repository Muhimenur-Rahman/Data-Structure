#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30};
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl<<"list max size: "<<mylist.max_size()<<endl;
    mylist.resize(2);
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    mylist.resize(8,90);
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    mylist.clear();
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}