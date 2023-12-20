#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Type-01: 
    list<int>mylist;
    cout<<"Size of mylist 1: "<<mylist.size()<<endl;
    //Type-02:
    list<int>mylist1(5);
    cout<<"Size of mylist 2: "<<mylist1.size()<<endl;
    //Type-03:
    list<int>mylist2(4,7);
    cout<<"Size of mylist 3: "<<mylist2.size()<<endl;
    //Type-04:
    list<int>mylist3(mylist2);
    cout<<"Size of mylist 4: "<<mylist3.size()<<endl;
    //Type-05:
    int a[6]={10,20,30,40,50,60};
    list<int>mylist4(a,a+6);
    //Type-05:
    int a[6]={10,20,30,40,50,60};
    list<int>mylist4(a,a+6);
    cout<<"Size of mylist 5: "<<mylist4.size()<<endl;
    //Printing elements
    cout<<"elemnts of mylist2: "; 
    for(auto it = mylist2.begin(); it!=mylist2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"elemnts of mylist4: "; 
    for(int val:mylist4)
    {
        cout<<val<<" ";
    }
    return 0;
}