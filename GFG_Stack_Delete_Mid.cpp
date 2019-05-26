#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
stack<ll> st;
void Detele_Mid(ll size)
{
    if(!st.empty())
    {
        ll x;
        if(st.size()==(size+1)/2)
            {
              st.pop();
            }
        x=st.top();
        st.pop();
        Detele_Mid(size);
        st.push(x);
        
    }
}
int main()
{
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    Detele_Mid(st.size());
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
        
    }
}
