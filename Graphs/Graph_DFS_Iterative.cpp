#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
#define N 500
vector<ll> g[N];
bool visit[N];
void DFS(int root)
{
    stack<ll> st;
    st.push(root);
    while(!st.empty())
    {
        int curr=st.top();
        cout<<curr<<" ";
        visit[curr]=true;
        st.pop();
        for(int i=0;i<g[curr].size();i++)
        {
            if(!visit[g[curr][i]])
            {
                //st.push(root);
                st.push(g[curr][i]);
            }
        }
        //st.pop();
    }
}
int main()
{
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
    }
    DFS(0);
    
}
