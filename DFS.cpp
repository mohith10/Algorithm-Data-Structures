#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool visit[100];
ll n,m;
vector<ll> g[100];
vector<ll> res;
void dfs(ll v)
{
    visit[v]=true;
    res.push_back(v);
    for(ll j=0;j<g[v].size();j++)
        if(!visit[g[v][j]])
        dfs(g[v][j]);
}
int main()
{


    cin>>n>>m;

    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        x--;y--;
        g[x].push_back(y);
        g[y].push_back(x);

    }
    for(ll i=0;i<n;i++)
            {
                res.clear();
                if(!visit[i])
                    dfs(i);
                for(ll i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<"\n";
            }


}
