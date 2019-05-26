#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
stack<char> st;

int main()
{
    string s;
    getline(cin,s);
    string res="";
    for(ll i=0;i<s.length();i++)
    {
        
        if(s[i]==' ')
        {
            while(!st.empty())
            {
                cout<<st.top();
                //cout<<res<<endl;
                st.pop();
            }
            cout<<' ';
        }
        else st.push(s[i]);
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
   // cout<<res;
}
