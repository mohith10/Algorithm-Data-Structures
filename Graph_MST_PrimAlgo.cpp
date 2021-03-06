#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 200
vector<ll> taken(N,1);
vector<pair<ll,ll>> g[N];
priority_queue<pair<ll,ll>> pi;
//map<pair<ll,ll>,ll> t;
void process(ll v)
{
    taken[v]=1;

    for(ll i=0;i<g[v].size();i++)
    {
        pair<ll,ll> p;
        p=g[v][i];
        ll u=p.first;
        ll w=p.second;
        if(taken[u]==0)
        {
            pi.push(make_pair(-w,-u));
        }
    }

}

int main()
{
    ll n,m;
    cin>>n>>m;
    taken.assign(n,0);
    //for(ll i=0;i<n;i++)
      //  cout<<taken[i]<<" ";
    while(m--)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        g[x].push_back(make_pair(y,w));
        g[y].push_back(make_pair(x,w));
    }
    ll mst_cost=0;
    process(0);
    while(!pi.empty())
    {
        pair<ll,ll> t=pi.top();
        pi.pop();
        ll v=-t.second;
        ll w=-t.first;
        if(!taken[v])
            {
                mst_cost+=w;
                process(v);
            }
    }
    cout<<mst_cost;



}

