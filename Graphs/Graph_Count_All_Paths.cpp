#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<ll> g[N];
void DFS(int root,int &res, int dest)
{
    
        visit[root]=true;
    if(root==dest)
        res++;
    //cout<<root<<" ";
    for(int i=0;i<g[root].size();i++)
        if(!visit[g[root][i]])
            DFS(g[root][i],res,dest);
    visit[root]=false;
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
        //g[y].push_back(x);
        
    }
    int res=0,dest;
    cin>>dest;
    DFS(2,res,dest);
    cout<<"Res "<<res;
    
}
