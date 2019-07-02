#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 500
vector<int> g[N];
bool visit[N];
int res=0;
void DFS(int root,int temp)
{
    temp++;
    res=max(temp,res);
    visit[root]=true;
    cout<<"Root "<<root<<" Res "<<res<<endl;
    for(int i=0;i<g[root].size();i++)
    {
        if(!visit[g[root][i]])
        {
            DFS(g[root][i],temp);
        }
    }
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
    }
    DFS(1,-1);
    cout<<"Longst Path is "<<res;
    
}
