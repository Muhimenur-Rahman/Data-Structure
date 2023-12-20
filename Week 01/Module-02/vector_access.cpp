#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4};
    cout<<"first element : "<<v[0]<<endl;
    cout<<"first element : "<<v.at(0)<<endl;
    cout<<"first element : "<<v.front()<<endl;
    cout<<"last element : "<<v[v.size()-1]<<endl;
    cout<<"last element : "<<v.back()<<endl;
    return 0;
}