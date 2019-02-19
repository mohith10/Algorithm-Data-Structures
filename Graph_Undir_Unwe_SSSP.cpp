#include<bits/stdc++.h>
using namespace std;
//Printing the path and shortst distance in Undirected Unweighted Graph
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define N 200
vector<pll> g[N];
bool visit[N];
   vector<ll> path;
void printPath(ll k,ll s)
{
    if(k==s)
    {
        cout<<s<<" ";
        return;
    }
    printPath(path[k],s);
    cout<<k<<" ";

}
int main()
{
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        g[x].push_back(make_pair(x,y));
        g[y].push_back(make_pair(y,x));
    }
    vector<ll> dist(n,0);

    queue<ll> q;
    ll s=0;
    q.push(0);
    dist[0]=0;
    visit[0]=0;
    while(!q.empty())
    {
       ll u=q.front();
       q.pop();
       for(ll i=0;i<g[u].size();i++)
       {
           pll curr=g[u][i];
           if(!visit[curr.second])
           {
               visit[curr.second]=1;
               q.push(curr.second);
               dist[curr.second]=dist[curr.first]+1;
               path[curr.second]=curr.first;
            }

       }

    }
    ll k;
    cin>>k;
    cout<<"Enter the vertex yo want to find PATH from : ";
    printPath(k,s);
}
