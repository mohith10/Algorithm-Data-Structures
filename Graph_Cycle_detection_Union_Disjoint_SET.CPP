#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<ll> g[N];
int parent[N]={-1};
int find(int u)
{
    if(parent[u]==-1)
        return u;
    return find(parent[u]);
}
void Union(int u,int v)
{
    parent[u]=v;
}
bool Cycle_Detecting(int u,int v)
{
    if(find(u)==find(v))
        return true;
    Union(u,v);
    return false;
}

int main()
{
   int n,m;
   cin>>n>>m;
   //priority_queue<pair<ll,pair<ll,ll>> pq;
   while(m--)
   {
       ll x,y;
       cin>>x>>y;\
       g[x].push_back(y);
       
   }
   bool flag=false;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<g[i].size();j++)
       {
           cout<<"Edge passed "<<i<<" "<<g[i][j]<<endl;
           flag=Cycle_Detecting(i,g[i][j]);
           if(flag)
            {
                cout<<"Cycle Detected";
                break;
            }
       }
   }
   if(!flag)
    cout<<"No Cycle";
}
