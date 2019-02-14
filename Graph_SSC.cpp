#include<bits/stdc++.h>
using namespace std;
#define N 200
typedef long long ll;
vector<ll> g[N];
int visit[N]={0};
bool cycle=false;
vector<ll> g_inverse[N];
vector<ll> last_dfs;
void Graph_Transpose(ll n)
{
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<g[i].size();j++)
        {
            g_inverse[g[i][j]].push_back(i);
        }
    }

}
void dfs(vector<ll> g1[],ll v, ll check)
{
    visit[v]=1;
    cout<<v<<" ";
    for(ll i=0;i<g1[v].size();i++)
    {
        if(visit[g1[v][i]]==0)
            dfs(g1,g1[v][i],check);
    }

    if(check==1)
        last_dfs.push_back(v);

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
    cout<<"DFS sequence is: ";
    dfs(g,0,1);
    Graph_Transpose(n);
    cout<<endl;
    for(ll i=0;i<n;i++)
        visit[i]=0;

    cout<<"Inverse Graph is :"<<endl;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<g_inverse[i].size();j++)
            cout<<i<<" "<<g_inverse[i][j]<<endl;
    }
    for(ll i=last_dfs.size()-1;i>=0;i--)
    {
       // cout<<last_dfs[i]<<endl;
        if(visit[last_dfs[i]]==0)
            {
                //cout<<"dfs traversal is ";
                dfs(g_inverse,last_dfs[i],0);
                cout<<"Connected components are ";
            for(ll i=0;i<n;i++)
            {
                if(visit[i]==1)
                {
                    cout<<i<<" ";
                    visit[i]=-1;
                }

            }
            cout<<endl;
            }



    }

}

