#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
        
    ll k;
    cin>>k;
    
    ll maxi=INT_MIN,mini=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        mini=min(mini,a[i]);
        maxi=max(a[i],maxi);
    }
    ll res=(mini+k)-(maxi-k);
    cout<<"Minimized Difference "<<res;
}
