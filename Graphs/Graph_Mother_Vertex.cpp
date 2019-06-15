#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<ll> g[N];
//stack<ll> st;
void DFS(int root)
{
    visit[root]=true;
    cout<<root<<" ";
    for(int i=0;i<g[root].size();i++)
        if(!visit[g[root][i]])
            DFS(g[root][i]);
   // st.push(root);
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
    ll root;
    for(int i=0;i<n;i++)
    {
       if(visit[i]==false){
            DFS(i);
            root=i;
            cout<<"root changed to "<<root<<endl;
        }//cout<<endl;
    }
    //DFS(1);
   // cout<<"Last finished is :"<<root;
    for(int i=0;i<n;i++)
        visit[i]=false;
   // ll root=st.top();
    //st.clear();
    cout<<endl;
    DFS(root);
    bool flag=true;
    for(int i=0;i<n;i++)
        if(!visit[i])
        {
            flag=false;
            break;
        }
    if(flag)
        cout<<"Mother Vertex "<<root;
    else cout<<"No Mother";
    
    
}
