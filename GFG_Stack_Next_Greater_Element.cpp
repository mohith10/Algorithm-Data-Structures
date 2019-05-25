#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    stack<ll> st;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    
    st.push(a[0]);
    for(ll i=1;i<n;i++)
    {
        while(!st.empty() && st.top()<a[i])   
           {
               cout<<st.top()<<"->"<<a[i]<<endl;
               st.pop();
           }
        //if(!st.empty())
            
        st.push(a[i]);
    }
    while(!st.empty())
    {
        cout<<st.top()<<"->"<<-1<<endl;
        st.pop();
        
    }
}
