#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
int dist[N];
vector<pair<ll,ll>> g[N];
priority_queue<pair<ll,ll>, vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
vector<pair<ll,pair<ll,ll>>> Edge;
int parent[N];
void Shortest_Dij()
{
    pq.push(make_pair(0,2));
    dist[2]=0;
    while(!pq.empty())
    {
        auto curr=pq.top();
        pq.pop();
        ll w=curr.first,u=curr.second;
        for(int i=0;i<g[u].size();i++)
        {
            if(dist[g[u][i].first]>dist[u]+g[u][i].second)
            {
                dist[g[u][i].first]=dist[u]+g[u][i].second;
                parent[g[u][i].first]=u;
                pq.push(make_pair(dist[g[u][i].first],g[u][i].first));
            }
        }
    }
    cout<<"Shortest Distance "<<endl;
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        g[x].push_back(make_pair(y,w));
    }
    for(int i=0;i<n;i++)
        parent[i]=0;
    for(int i=0;i<n;i++)
        dist[i]=INT_MAX;
    Shortest_Dij();
    for(int i=0;i<n;i++)
        cout<<i<<" "<<dist[i]<<endl;
}
