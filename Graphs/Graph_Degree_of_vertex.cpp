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
    ii deg[n]={0};
    while(m--)
    {
        ii x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
        deg[x]++;
        deg[y]++;
    }
    ii res=0;
    ii x;
    cin>>x;
    cout<<"Degree of x "<<deg[x];
}
