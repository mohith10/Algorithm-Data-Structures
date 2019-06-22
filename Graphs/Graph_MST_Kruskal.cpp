#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<pair<ll,ll>> g[N];
vector<pair<int,pair<int,int>>> Edge;
int parent[N];
int find(int u)
{
    cout<<"Parent "<<u<<" "<<parent[u]<<endl;
    if(parent[u]==-1)
        return u;
    return find(parent[u]);
}
void Union(int u,int v)
{
   
        parent[find(u)]=find(v);
    
}
bool Cycle_Detecting(ll u,ll v)
{
    if(find(u)==find(v))
        return true;
    //cout<<"Returned false"<<endl;
    return false;
}
int MST()
{
    int res=0;
    for(int i=0;i<Edge.size();i++)
    {
        pair<ll,pair<ll,ll>> edge=Edge[i];
        cout<<edge.second.first<<" "<<edge.second.second<<endl;
        ll f1=find(edge.second.first);
        ll f2=find(edge.second.second);
        if(f1!=f2)
        {
            res+=edge.first;
            Union(edge.second.first,edge.second.second);
        }
    }
    return res;
}

int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++)
    parent[i]=-1;
   int i=0;
   while(m--)
   {
       ll x,y,w;
       cin>>x>>y>>w;
       Edge.push_back(make_pair(w,make_pair(x,y)));
    }
    sort(Edge.begin(),Edge.end());
    int res=MST();
    cout<<res<<endl;
}
