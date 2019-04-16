#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll n;
	cin>>n;
	ll a[n];
	//priority_queue<ll> pq;
	for(ll i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	ll res=0;
	for(ll i=0;i<n;i++)
	    res=max(res,a[i]);
	cout<<res;
	return 0;
}
