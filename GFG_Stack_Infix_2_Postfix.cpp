#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int prec(char c)
{
    if (c=='^')
        return 4;
    if(c=='*' || c=='/')
        return 3;
    if(c=='+' || c=='-')
            return 2;
    return -1;
}
void Infix_Postfix(string s)
{
    ll len=s.length();
    stack<char> st;
    st.push('N');
    string res="";
    for(ll i=0;i<len;i++)
    {
        if((s[i]>='a'&&s[i]<='z') || (s[i]>'A' && s[i]=='Z'))
            res+=s[i];
        
        else if(s[i]=='(')
                st.push('(');
        else if(s[i]==')')
        {
                while(st.top()!= 'N' && st.top()!='(')
                {
                    res+=st.top();
                    st.pop();
                }
                if (st.top()=='(')
                    st.pop();
        }
        else
        {
            while(st.top()!='N' && prec(s[i])<=prec(st.top()))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    cout<<res;
}
int main() {
	string s;
	cin>>s;
	Infix_Postfix(s);
}
