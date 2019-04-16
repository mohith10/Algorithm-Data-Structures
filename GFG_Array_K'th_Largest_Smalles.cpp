#include <iostream>
#iclude<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll n;
	cin>>;
	priority_queue<ll> pq;
	for(ll i=0;i<n;i++)
	{
	    ll ele;
	    cin>>ele;
	    pq.push(-ele); // Remove negative sign in case oh k'th Largest number
	}
	ll k;
	cin>>k;
	ll res=0;
	while(k--)
	    {
	        res=-pq.top();
	        pq.pop();
	    }
	 cout<<res<<endl;
	return 0;
}
