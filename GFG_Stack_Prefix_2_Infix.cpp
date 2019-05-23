#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string s;
    stack<string> st;
    cin>>s;
    string res="";
    for(ll i=s.length()-1;i>=0;i--)
    {
        if((s[i]>='a' && s[i]<='z' )|| (s[i]>='A' && s[i]<='Z'))
            st.push(string(1,s[i]));
        else
        {
            string a=st.top();
            st.pop();
            string b=st.top();
            st.pop();
            string temp="("+a+s[i]+b+")";
            st.push(temp);
        }
    }
    cout<<st.top();
}
