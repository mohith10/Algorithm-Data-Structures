#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll res=0;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]--;
        }
    pair<ll,ll> g[n];
    for(ll i=0;i<n;i++)
    {
        g[i]=make_pair(a[i],i);
    }
    sort(g,g+n);
    vector<bool> visit(n,false);
    for(ll i=0;i<n;i++)
    {
        if(visit[i] || g[i].second==i)
            continue;
        ll cycle_nodes=0;
        ll j=i;
        while(!visit[j])
        {
            visit[j]=true;
            j=g[j].second;
            cycle_nodes++;
        }
        res+=(cycle_nodes-1);
    }
    cout<<res;

}
