#include<bits/stdc++.h>
using namespace std;
#define N 200
typedef long long ll;
ll n,m;
ll in_degree[N]={0};
vector<ll> g[N];
vector<ll> res;
bool visit[N];
void bfs()
{
    queue<ll> q;
    for(ll i=0;i<n;i++)
    {
        if(in_degree[i]==0)
            q.push(i);
    }
    while(!q.empty())
    {
        ll v=q.front();
        q.pop();
        res.push_back(v);
        for(ll i=0;i<g[v].size();i++)
        {
            if(--in_degree[g[v][i]]==0)
                q.push(g[v][i]);
        }
    }
    cout<<"Topological Sort: ";
    for(ll i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}

int main()
{

    cin>>n>>m;
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
        in_degree[y]++;
    }
    bfs();
}

