#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
#define N 200
vl g[N];
bool visit[N];
void dfs(ll v)
{
    visit[v]=true;
    for(ll i=0;i<g[v].size();i++)
        if(!visit[g[v][i]])
            dfs(g[v][i]);
}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a,b;

    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
    }
    cin>>a>>b;
    visit[a]=true;
    dfs(0);
    if(visit[b])
        cout<<"NOT Dominate";
    else cout<<"Dominates";


}
