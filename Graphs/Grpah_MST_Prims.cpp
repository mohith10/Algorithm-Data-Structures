#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<pair<ll,ll>> g[N];\
priority_queue<pair<ll,ll>> pq;
void process(int vtx)
{
    visit[vtx]=true;
    for(int i=0;i<g[vtx].size();i++)
    {
        int ww=g[vtx][i].second;
        int vv=g[vtx][i].first;
        if(!visit[vv])
        {
            pq.push(make_pair(-ww,-vv));
        }
    }
}

int main()
{
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        g[x].push_back(make_pair(y,w));
        //g[y].push_back(x);
        
    }
    int res=0;
    process(0);
    while(!pq.empty())
    {
        pair<ll,ll> curr=pq.top();
        pq.pop();
        ll v=-curr.second,ww=-curr.first;
        if(!visit[v])
        {
            res+=ww;
            process(v);
        }
        
    }
    cout<<"MST "<<res;
    
}
