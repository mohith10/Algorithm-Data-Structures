#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll n;
	priority_queue<ll> min_heap;
	cin>>n;
	ll sum[n+1];
	sum[0]=0;
	for(ll i=1;i<=n;i++)
	{
	    ll ele;
	    cin>>ele;
	    sum[i]=sum[i-1]+ele;
	}
	ll k;
	cin>>k;
	for(ll i=1;i<=n;i++)
	    cout<<sum[i]<<" ";
	for(ll i=1;i<=n;i++)
	{
	    for(ll j=i+1;j<=n;j++)
	    {
	        
	        min_heap.push(-(sum[j]-sum[i]));
	      
	    }
	}
	
	ll res=0;
	
	while(k--)
	{
	    res=-min_heap.top();
	    min_heap.pop();
	}
	cout<<"\nk'th largest contigous sum : "<<res;
}
