#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 200
vector<ll> g[N];
bool visit[N];
int color[N];
bool isBipartite=true;
void BFS()
{
   queue<ll> q;
   for(ll i=0;i<N;i++)
    color[i]=-1;
   color[0]=0;
   q.push(0);
   while(!q.empty()&& isBipartite)
   {
       ll top=q.front();
       q.pop();
       //cout<<"TOp: "<<top<<endl;
       for(ll i=0;i<g[top].size();i++)
       {
           //cout<<"Curr: "<<g[top][i]<<endl;
           if(color[g[top][i]]==-1)
            {
                color[g[top][i]]=1-color[top];
                q.push(g[top][i]);
                //visit[g[top][i]]=true;
            }
            else if(color[g[top][i]]==color[top] )
            {
                isBipartite=false;
                break;
            }
       }
       //cout<<q.size()<<" Exiting.."<<endl;

   }

   cout<<endl;
   if(isBipartite)
    cout<<"Bipartite";
   else cout<<"Not Bipartite";
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
       // g[y].push_back(x);
    }
    BFS();
}
