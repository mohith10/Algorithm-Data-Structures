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
    
    ll x,y,res=INT_MAX;
    cin>>x>>y;
    stack<ll> s;
    for(ll i=0;i<n;i++)
    {
        if(s.empty() && (a[i]==x || a[i]==y)  )
            s.push(i);
        if(a[i]==x && a[s.top()]==y)
            {
                res=min(res,i-s.top());
                s.pop();
                s.push(i);
            }
        else if(a[i]==y && a[s.top()]==x)
        {
            res=min(res,i-s.top());
            s.pop();
            s.push(i);
        }
        else if(a[i]==x || a[i]==y)
            s.push(i);
            
    }
    cout<<"Minimum distance between "<<x<<" & "<<y<<" is "<<res;
}
