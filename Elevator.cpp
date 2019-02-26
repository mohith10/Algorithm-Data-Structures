#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N  1000001
vector<ll> g[N];
bool visit[N];
ll dist[N]={0};
int main()
{
    ll f,gi,s,u,d;
    cin>>f>>s>>gi>>u>>d;
    //f s g u d
    //f--;
    //gi--;
    //s--;
    for(ll i=1;i<=f;i++)
    {
        if(i+u<=f)
        {
           g[i].push_back(i+u);
           //cout<<"From "<<i<<" to "<<i+u<<endl;
        }
        if(i-d>0)
        {
            g[i].push_back(i-d);
            //cout<<"From "<<i<<" to "<<i-d<<endl;
        }
    }
    queue<ll> q;
    q.push(s);
    ll res=0;
    bool found=false;
    visit[s]=true;
    while(!q.empty())
    {
        ll curr=q.front();
        if(curr==gi)
        {
            res=dist[curr];
            found=true;
        }
        q.pop();
        if(found)
             break;
        for(ll i=0;i<g[curr].size();i++)
        {
            if(!visit[g[curr][i]])
            {
               // cout<<"Node visited : "<<g[curr][i]<<endl;
                q.push(g[curr][i]);
                dist[g[curr][i]]=dist[curr]+1;
                visit[g[curr][i]]=true;
            }
        }
    }
    if(found)
        cout<<res;
    else cout<<"use the stairs";
}

