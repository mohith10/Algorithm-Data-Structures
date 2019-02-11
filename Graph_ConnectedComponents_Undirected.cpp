#include<bits/stdc++.h>
using namespace std;
#define N 200
typedef long long ll;

vector<ll> g[N];
bool visit[N];
dfs(ll v)
{
    cout<<v<<" ";
    visit[v]=true;
    for(ll i=0;i<g[v].size();i++)
        if(!visit[g[v][i]])
            dfs(g[v][i]);

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
    for(ll i=0;i<n;i++)
      {
          if(!visit[i])
           {
               cout<<"Connected bunch is: "<<" ";
               dfs(i);

               cout<<endl;
           }
      }

}
