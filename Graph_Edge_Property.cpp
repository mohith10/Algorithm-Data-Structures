#include<bits/stdc++.h>
using namespace std;
#define N 200
typedef long long ll;
vector<ll> g[N];
vector<ll> visit(N,2);
bool cycle=false;
vector<ll> parent(N,0);
void dfs(ll v)
{
    visit[v]--;
    for(ll i=0;i<g[v].size();i++)
    {
        //cout<<"size"<<g[v].size();
        if(visit[g[v][i]]==1&&parent[v]!=g[v][i])
        {
            cout<<"Back Edge "<<g[v][i]<<" "<<v<<endl;
           // visit[v]--;
            cycle=true;

        }
        else if(visit[g[v][i]]==2)
            {
                parent[g[v][i]]=v;
                cout<<"Moving to next node"<<endl;
                dfs(g[v][i]);
            }
        else if(visit[g[v][i]]==1&&parent[v]==g[v][i])
        {
            //visit[v]--;
            cout<<"Bi-directional Edges "<<g[v][i]<<" "<<v<<endl;
        }
        else if(visit[g[v][i]]==0)
            cout<<"Cross Edge/ Straight Edge "<<g[v][i]<<" "<<v<<endl;

    }
    visit[v]=0;



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
        g[y].push_back(x);
    }
    dfs(0);
    if(cycle)
        cout<<"Cycle detected !";
    else cout<<"No Cycle";

}
