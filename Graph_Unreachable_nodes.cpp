#include<bits/stdc++.h>
using namespace std;
#define N 500
typedef int ii;
vector<ii> g[N];
bool visit[N];
void DFS(ii root)
{
    visit[root]=true;
    for(int i=0;i<g[root].size();i++)
    {
        if(!visit[g[root][i]])
            DFS(g[root][i]);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        ii x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    ii res=0;
    for(int i=0;i<n;i++)
    {
        if(!visit[i])
        {
            DFS(i);
            res++;
        }
        
    }
    cout<<"No of unreacheable nodes: "<<res;
}
