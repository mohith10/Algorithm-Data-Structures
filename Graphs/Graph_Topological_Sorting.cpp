#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<ll> g[N];
stack<ll> st;
void DFS(int root)
{
    visit[root]=true;
    //cout<<root<<" ";
    for(int i=0;i<g[root].size();i++)
        if(!visit[g[root][i]])
            DFS(g[root][i]);
    st.push(root);
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
       // g[y].push_back(x);
        
    }
    for(int i=0;i<n ;i++)
    {
        if(!visit[i])
            DFS(i);
    }
    list<ll> top_list;
    while(!st.empty())
       {
           cout<<"Pushed element" <<st.top()<<endl;
           top_list.push_front(st.top());
            st.pop();
       }
     for(auto it=top_list.begin();it!=top_list.end();it++)
        cout<<*it<<" ";
        
    
}
