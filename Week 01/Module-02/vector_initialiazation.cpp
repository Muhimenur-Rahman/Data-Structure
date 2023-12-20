#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Type-01
    vector<int> v1(5);
    cout<<"vector1 Size: "<<v1.size()<<endl;
    cout<<"v1 elements: ";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;




    //Type-02
    vector<int>v2(6,4);
    cout<<"vector2 Size: "<<v2.size()<<endl;
    cout<<"v2 elements: ";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;



    //Type-03
    vector<int>v3(v2);
    cout<<"vector3 is equal of v2 and Size: "<<v3.size()<<endl;
    cout<<"v3 elements: ";
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;



    //Type-04
    int a[6]={1,3,5,9,8,4};
    vector<int>v4(a,a+6);
    cout<<"vector4 Size: "<<v4.size()<<endl;
    cout<<"v4 elements: ";
    for(int i=0;i<v4.size();i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;



    
    //type-05
    vector<int>v5={5,8,10};
    cout<<"vector5 Size: "<<v5.size()<<endl;
    cout<<"v5 elements: ";
    for(int i=0;i<v5.size();i++)
    {
        cout<<v5[i]<<" ";
    }
    return 0;
}