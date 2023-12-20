#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        stack<char>st;
        string s;
        cin>>s;
        for(char c : s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else
            {
                if(c=='A')
                {
                    if(st.top()=='B')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(c);
                    }
                }
                if(c=='B')
                {
                    if(st.top()=='A')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(c);
                    }
                }
            }
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}