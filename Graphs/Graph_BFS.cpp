#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<ll> g[N];
void BFS(int root)
{
    queue<ll> q;
    visit[root]=true;
    q.push(root);
    while(!q.empty())
    {
        ll curr=q.front();
        q.pop();
        cout<<curr<<" ";
        for(ll i=0;i<g[curr].size();i++)
           {
               if(visit[g[curr][i]]==false)
                {
                    q.push(g[curr][i]);
                    visit[g[curr][i]]=true;
                }
           }
                
    }
    
    
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
    BFS(1);
    
}
