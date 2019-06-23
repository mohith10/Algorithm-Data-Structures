#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<pair<ll,ll>> g[N];\
priority_queue<pair<ll,ll>> pq;
vector<pair<ll,pair<ll,ll>>> Edge;
int parent[N];
void process(int vtx)
{
    visit[vtx]=true;
    for(int i=0;i<g[vtx].size();i++)
    {
        if(!visit[g[vtx][i].first])
            pq.push(make_pair(-g[vtx][i].second,-g[vtx][i].first));
    }
}
void Prims()
{
    int res=0;
    process(0);
    while(!pq.empty())
    {
        pair<ll,ll> curr=pq.top();
        pq.pop();
        if(!visit[-curr.second])
        {
            res+=(-curr.first);
            process(-curr.second);
        }
    }
    cout<<"Prims MST "<<res<<endl;
    
}
int find(int u)
{
    if(parent[u]==-1)
        return u;
    return (parent[u]);
}
void Union(int u,int v)
{
    parent[find(u)]=find(v);
}
bool Check_Cycle(int u,int v)
{
    if(find(u)==find(v))
        return true;
    return false;
}

void Kruskals()
{
    int res=0;
    for(int i=0;i<Edge.size();i++)
    {
        if(!Check_Cycle(Edge[i].second.first,Edge[i].second.second))
        {
            res+=Edge[i].first;
            cout<<"Edge Added "<<Edge[i].second.first<<" "<<Edge[i].second.second<<endl;
            Union(Edge[i].second.first,Edge[i].second.second);
        }
    }
    cout<<"Kruskal MST "<<res<<endl;
    
}
int main()
{
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        //cout<<"log "<<log(w)<<endl;
        g[x].push_back(make_pair(y,(w)));
        Edge.push_back(make_pair(w,make_pair(x,y)));
        //g[y].push_back(x);
        
    }
    sort(Edge.begin(),Edge.end());
    for(int i=0;i<n;i++)
        parent[i]=-1;
    Prims();
    for(int i=0;i<n;i++)
        visit[i]=false;
    Kruskals();
   
    
}
