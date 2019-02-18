
// Program for MAXIMUM SPANNNING TREE
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 200
typedef pair<ll,ll> pll;
vector<pll> g[N];
bool visit[N];
priority_queue<pll> pq;

void process(ll u)
{
   visit[u]=true;
   for(ll i=0;i<g[u].size();i++)
   {
       if(!visit[g[u][i].first])
        pq.push(make_pair(g[u][i].second,g[u][i].first));
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
        g[y].push_back(make_pair(x,w));
    }
    ll max_cost=0;
    process(0);
    //cout<<"From 0 to ";
    while(!pq.empty())
    {
        pll curr=pq.top();
        pq.pop();
        if(!visit[curr.second]){
                max_cost+=curr.first;
                //cout<<curr.second<<" with cost "<<curr.first<<endl;
                process(curr.second);

        }

    }
    cout<<"Maximum cost : "<<max_cost;


}

