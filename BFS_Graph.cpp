#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
#define N 200
vl g[N];
bool visit[N];
void bfs(ll v)
{
    queue<ll> q;
    q.push(v);
    while(!q.empty())
    {
        ll top=q.front();
        q.pop();
        cout<<top<<" ";
        for(ll i=0;i<g[top].size();i++)
           {
               if(!visit[g[top][i]])
               {
                   q.push(g[top][i]);
                   visit[g[top][i]]=true;
               }
           }
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
    bfs(0);
}
