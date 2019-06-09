#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    map<ll,pair<ll,ll>> tab;
    ll n;
    cin>>n;
    int a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(tab.find(a[i])==tab.end())
            tab[a[i]]=make_pair(i,-1);
        else
        {
            tab[a[i]].second=i;
        }
    }
    for(auto it=tab.begin();it!=tab.end();it++)
    {
        if(it->second.second!=-1)
        {
            cout<<"For "<<it->first<<" maximum distance is "<<(it->second.second)-(it->second.first)<<endl;
        }
    }
    
    
}
