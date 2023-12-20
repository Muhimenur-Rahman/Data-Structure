#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>list1={10,20,30,40};
    list<int>list2={11,12,13};
    list<int>list3={31,32,33,34};
    list<int>list4;
    list4 = list2;
    cout<<endl<<"list 4: ";
    for(int val:list4)
    {
        cout<<val<<" ";
    }
    list4.assign(list3.begin(),list3.end());
    cout<<endl<<"list 4: ";
    for(int val:list4)
    {
        cout<<val<<" ";
    }
    list2.push_back(90);
    cout<<endl<<"list 2: ";
    for(int val:list2)
    {
        cout<<val<<" ";
    }
    list2.push_front(8);
    cout<<endl<<"list 2: ";
    for(int val:list2)
    {
        cout<<val<<" ";
    }
    list1.pop_back();
    cout<<endl<<"list 1: ";
    for(int val:list1)
    {
        cout<<val<<" ";
    }
    list1.pop_front();
    cout<<endl<<"list 1: ";
    for(int val:list1)
    {
        cout<<val<<" ";
    }
    //insert
    list3.insert(next(list3.begin(),2),5);
    cout<<endl<<"list 3: ";
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    list3.insert(next(list3.begin(),2),list1.begin(),list1.end());
    cout<<endl<<"list 3: ";
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    vector<int> v={21,22,23,24};
     list2.insert(next(list2.begin(),2),v.begin(),v.end());
    cout<<endl<<"list 2: ";
    for(int val:list2)
    {
        cout<<val<<" ";
    }
    list3.erase(next(list3.begin(),1),next(list3.begin(),5));
    cout<<endl<<"list 3: ";
    for(int val:list3)
    {
        cout<<val<<" ";
    }
    list<int>newlist={1,2,3,1,2,1,3,2,4,8,9};
    replace(newlist.begin(),newlist.end(),3,100);
    cout<<endl<<"new list: ";
    for(int val:newlist)
    {
        cout<<val<<" ";
    }
    auto it= find(newlist.begin(),newlist.end(),90);
    if(it==newlist.end())cout<<endl<<"NOT FOUND";
    else cout<<endl<<"FOUND";
    return 0;
}