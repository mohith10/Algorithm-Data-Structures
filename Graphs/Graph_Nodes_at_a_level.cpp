#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<ll> g[N];
int level[N]={0};
void BFS(int root)
{
    queue<ll> q;
    visit[root]=true;
    q.push(root);
    int lev;
    cin>>lev;
    int res=0;
    while(!q.empty())
    {
        ll curr=q.front();
        q.pop();
        if(lev==level[curr])
            res++;
            cout<<curr<<" level at "<<level[curr]<<endl;
        for(ll i=0;i<g[curr].size();i++)
           {
               if(visit[g[curr][i]]==false)
                {
                    level[g[curr][i]]=level[curr]+1;
                    q.push(g[curr][i]);
                    visit[g[curr][i]]=true;
                }
           }
                
    }
    cout<<"Res "<<res;
    
    
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
    BFS(0);
    
}
