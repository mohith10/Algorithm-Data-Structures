#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<ll> g[N];
void DFS(int root, int &res)
{
    visit[root]=true;
    cout<<root<<" ";
    for(int i=0;i<g[root].size();i++)
       {
           if(!visit[g[root][i]])
            DFS(g[root][i],res);
            else 
                res=1;
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
        //g[y].push_back(x);
        
    }
    
    vector<int> g_tans[500];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<g[i].size();j++)
        {
            g_tans[g[i][j]].push_back(i);
        }
   }
   int res=0;
   DFS(0,res);
   if(res)
        cout<<"Cycle";
    else cout<<"Uncyclic";
    
}
