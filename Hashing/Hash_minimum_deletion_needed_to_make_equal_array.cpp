#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    map<ll,ll> tab;
    int a[6],n=6;
    ll res=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        tab[a[i]]++;
        res=max(res,tab[a[i]]);
    }
    int count=0;
    for(auto it=tab.begin();it!=tab.end();it++)
    {
        
       count+=(it->second<res);
    }
    cout<<"Minimum deletion needed "<<count;
    
    
}
