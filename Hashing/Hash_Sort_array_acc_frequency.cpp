#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    map<ll,ll> m;
    int a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    priority_queue<pair<ll,ll>> p;
    for(auto it=m.begin();it!=m.end();it++)
    {
        //cout<<"Pair of "<<m->first<<" "<<m->second<<endl;
        p.push(make_pair(it->second,it->first));
    }
    int i=0;
    while(!p.empty())
    {
        int k=p.top().first;
        while(k--)
            a[i++]=p.top().second;
        p.pop();
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
     
}
