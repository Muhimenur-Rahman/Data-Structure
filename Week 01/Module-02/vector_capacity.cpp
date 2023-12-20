#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Vector size:"<<v.size()<<endl;
    cout<<"Vector capacity:"<<v.capacity()<<endl;
    cout<<"Vector max_size:"<<v.max_size()<<endl;
    //adding one element in vector
    v.push_back(7);
    cout<<"Vector size after 1st element:"<<v.size()<<endl;
    cout<<"Vector capacity after 1st element:"<<v.capacity()<<endl;
     v.push_back(2);
    cout<<"Vector size after 2nd element:"<<v.size()<<endl;
    cout<<"Vector capacity after 2nd element:"<<v.capacity()<<endl;
     v.push_back(4);
    cout<<"Vector size after 2nd element:"<<v.size()<<endl;
    cout<<"Vector capacity after 2nd element:"<<v.capacity()<<endl;
    cout<<"Vector elements : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<"Vector size after clear :"<<v.size()<<endl;
    cout<<"Vector capacity after clear :"<<v.capacity()<<endl;

    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    cout<<"Vector elements : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.resize(2);
    cout<<"Vector size after resize :"<<v.size()<<endl;
    cout<<"Vector elements after resize : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.resize(7,100);
    cout<<"Vector size after resize adding elements :"<<v.size()<<endl;
    cout<<"Vector elements after resize adding elements : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}