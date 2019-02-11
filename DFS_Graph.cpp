#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 2000
typedef vector<ll> vl;
vl g[N];
bool visit[N];
ll n,m;
void dfs(ll v)
{
    visit[v]=true;
    for(ll i=0;i<g[v].size();i++)
    {
        if(!visit[g[v][i]])
            dfs(g[v][i]);
    }
}
int main()
{
    cin>>n>>m;
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(0);





}
