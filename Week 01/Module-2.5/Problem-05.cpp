#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>count(26);
    int i;
    char a;
    while(cin>>a)
    {
        count[a-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            cout<<char(i+'a')<<" : "<<count[i]<<endl;
        }
    }
    return 0;
}