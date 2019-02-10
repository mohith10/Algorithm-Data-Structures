#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll> d,h;
    for(ll i=0;i<n;i++)
        {
            ll ele;
            cin>>ele;
            d.push_back(ele);
        }
    for(ll i=0;i<n;i++)
      {
          ll ele;
          cin>>ele;
          h.push_back(ele);
      }
    sort(h.begin(),h.end());
    ll res=0;
    for(ll i=0;i<n;i++)
    {
        auto it=lower_bound(h.begin(),h.end(),d[i]);
        if(it!=h.end())
        {
            res++;
            h.erase(it);
        }
        else break;
    }
    if(res==n)
        cout<<"YES";
    else cout<<"NO";
}
