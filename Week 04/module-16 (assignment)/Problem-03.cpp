#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;
    int Q;
    cin>>Q;
    for(int i=1;i<=Q;i++)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
        if(n==0)
        {
            getchar();
            string s;
            cin>>s;
            q.push(s);
        }
    }
    return 0;
}