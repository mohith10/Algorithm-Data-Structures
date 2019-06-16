#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<ll> g[N];
void DFS(int root)
{
    visit[root]=true;
    cout<<root<<" ";
    for(int i=0;i<g[root].size();i++)
        if(!visit[g[root][i]])
            DFS(g[root][i]);
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
        g[y].push_back(x);
        
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(!visit[i])
        {
            DFS(i);
            res++;
        }
    }
    cout<<"No of trees "<<res;
    
}
