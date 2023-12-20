#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,10,40,50,10,40,20};
    mylist.remove(50);
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    cout<<" Removed 50"<<endl;
    mylist.sort();
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
        cout<<" Sorted Ascending"<<endl;
    mylist.sort(greater<int>());
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    cout<<" Sorted Descending"<<endl;
    mylist.unique();
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    cout<<" Unique value"<<endl;
    mylist.reverse();
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
     cout<<" Reversed"<<endl;
    return 0;
}