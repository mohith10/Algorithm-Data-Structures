#include<bits/stdc++.h>
using namespace std;
#define N 500
typedef int ii;
vector<ii> g[N];
bool visit[N],cycleCheck=false;
ii parent[N];
void DFS(ii root)
{
    visit[root]=true;
    for(int i=0;i<g[root].size();i++)
    {
        if(!visit[g[root][i]])
            {
                parent[g[root][i]]=root;
                DFS(g[root][i]);
            }
        else if(visit[g[root][i]] && parent[root]!=g[root][i])
        {
            cycleCheck=true;
            break;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    //ii deg[n]={0};
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
    if(res==1 && cycleCheck==false)
        cout<<"Its a tree!";
    else cout<<"Its not a tree";
}
