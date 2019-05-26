#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
stack<ll> st;
void Insert_bottom(ll x)
{
    if(st.empty())
        st.push(x);
    
    else
    {
        ll a=st.top();
        st.pop();
        Insert_bottom(x);
        st.push(a);
    }
}
void reverse_stack()
{
    if(!st.empty())
    {
        ll x=st.top();
        st.pop();
        reverse_stack();
        
        Insert_bottom(x);
    }
    
}

int main() {
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    cout<<"Original stack 1 2 3 4 5"<<endl;
    reverse_stack();
    cout<<"Reversed Stack is: \n";
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
