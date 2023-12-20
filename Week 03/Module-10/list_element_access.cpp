#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>newlist={1,2,3,4,5,6};
    cout<<"First element: "<<newlist.front()<<endl;
    cout<<"Last element: "<<newlist.back()<<endl;
    cout<<"index element: "<<*next(newlist.begin(),2)<<endl;
    return 0;
}