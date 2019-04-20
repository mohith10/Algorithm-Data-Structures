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
    ll k,sum=0;
    cin>>k;
    for(ll i=0;i<k;i++)
        sum+=a[i];
    ll res=sum;
    ll res_ind=0;
    for(ll i=k;i<n;i++)
    {
        sum=sum+a[i]-a[i-k];
        if(res>sum)
        {
            res=sum;
            res_ind=i-k+1;
        }
        
    }
    cout<<"Minimum sum is "<<res<<" and average is "<<(double)res/k<<" from index "<<res_ind<<" to "<<res_ind+k-1<<endl;
}
