#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    stack<ll> st;
    map<ll,ll> m;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    st.push(a[0]);
    for(ll i=1;i<n;i++)
    {
        while(!st.empty() && m[st.top()]<m[a[i]])
        {
            cout<<"At position, "<<i<<" "<<st.top()<<"->"<<a[i]<<endl;
            st.pop();
        }
        st.push(a[i]);
    }
    while(!st.empty())
    {
        cout<<st.top()<<"<-"<<-1<<endl;
        st.pop();
    }
}
