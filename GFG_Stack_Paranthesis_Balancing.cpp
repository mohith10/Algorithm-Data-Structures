#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
stack<char> st;
int verify(char x)
{
    if(st.empty())
        return 0;
    if(st.top()=='{' && x=='}')
        return 1;
    if(st.top()=='[' && x==']')
        return 1;
    if(x==')' && st.top()=='(' )
        return 1;
    return 0;
}
int main() {
	string s;
	cin>>s;
	//stack<char> st;
	bool res=true;
	for(ll i=0;i<s.length();i++)
	{
	    if(s[i]=='(' || s[i]=='{' || s[i]=='[')
	        st.push(s[i]);
	    else if(!verify(s[i]))
	    {
	        res=false;
	        break;
	    }
	    else st.pop();
	    
	}
	if(res && st.empty())
	   cout<<"Balanced";
	   else cout<<"Not balanced";
}
