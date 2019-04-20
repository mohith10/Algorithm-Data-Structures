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
    
    //Calculate 1st profit by traversing from right to left
    //ll profit[n];
    ll profit[n]={0};
    ll max_price=a[n-1];
    //cout<<"max_price "<<max_price<<endl;
    for(ll i=n-2;i>=0;i--)
    {
        max_price=max(a[i],max_price);
        profit[i]=max(profit[i+1],max_price-a[i]);
       // cout<<"profit[i] "<<i<<" "<<profit[i]<<endl;
    }
    //cout<<profit[0]<<" is the maximum price he can attain in 1 stock\n";
    
    ll min_price=a[0];
    //Calculate 2nd  profit by traversing from left to right
    for(ll i=1;i<n;i++)
    {
        min_price=min(min_price,a[i]);
        profit[i]=max(profit[i-1],profit[i]+(a[i]-min_price));
    }
    
    cout<<"Maximum profit obtained: "<<profit[n-1];
}
