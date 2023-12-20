#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int n;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }   
        stack<char>st;
        stack<char>newst;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if(s[i]=='G')
                {
                    if(st.top()=='R')
                    {
                        st.pop();
                        if(!st.empty() && st.top()=='Y') st.pop();
                        else st.push('Y');
                    }
                    else if(st.top()=='B')
                    {
                        st.pop();
                        if(!st.empty() && st.top()=='C') st.pop();
                        else st.push('C');
                    }
                    else if(st.top()==s[i]) st.pop();
                    else st.push(s[i]);
                }
                if(s[i]=='R')
                {
                    if(st.top()=='G')
                    {
                        st.pop();
                        if(!st.empty() && st.top()=='Y') st.pop();
                        else st.push('Y');
                    }
                    else if(st.top()=='B')
                    {
                        st.pop();
                        if(!st.empty() && st.top()=='P') st.pop();
                        else st.push('P');
                    }
                    else if(st.top()==s[i]) st.pop();
                    else st.push(s[i]);
                }
                if(s[i]=='B')
                {
                    if(st.top()=='R')
                    {
                        st.pop();
                        if(!st.empty() && st.top()=='P') st.pop();
                        else st.push('P');
                    }
                    else if(st.top()=='G')
                    {
                        st.pop();
                        if(!st.empty() && st.top()=='C') st.pop();
                        else st.push('C');
                    }
                    else if(st.top()==s[i]) st.pop();
                    else st.push(s[i]);
                }
            }
        }
        if(st.empty()) cout<<" ";
        else
        {
            while(!st.empty())
            {
                newst.push(st.top());
                st.pop();
            }
            while(!newst.empty())
            {
                cout<<newst.top();
                newst.pop();
            }
        }
        cout<<endl;
    }
    return 0;
}