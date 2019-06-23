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
void Check_Negative(int n)
{
   for(int j=0;j<n;j++){
      for(int k=0;k<g[j].size();k++)
    {
        if(dist[j]+g[j][k].second<dist[g[j][k].first])
            cout<"Negative Cycle detected !";
    }
   }
}
void Shortest_Bellman_Ford(int n)
{
    dist[0]=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<g[j].size();k++)
               {
                   if(dist[j]+g[j][k].second<dist[g[j][k].first])
                       dist[g[j][k].first]=dist[j]+g[j][k].second;
        }       }
    }
    Check_Negative(n);
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
    Shortest_Bellman_Ford(n);
    for(int i=0;i<n;i++)
        cout<<i<<" "<<dist[i]<<endl;
}
