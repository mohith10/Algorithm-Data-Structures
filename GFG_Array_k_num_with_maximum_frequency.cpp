#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n;
	cin>>n;
	// If negative numbers are allowed
	multiset<ll> freq;
	for(ll i=0;i<n;i++)
	{
	    ll ele;
	    cin>>ele;
	    freq.insert(ele);
	    
	}
	ll k;
	cin>>k;
	priority_queue<pair<ll,ll>> max_heap;
	for(auto it=freq.begin();it!=freq.end();)
	{
	    //cout<<*it<<" ";
	    ll count=freq.count(*it);
	     max_heap.push(make_pair(count,*it));
	        
	    advance(it,count);
	}
	while(k--)
	{
	    cout<<max_heap.top().second<<endl;
	    max_heap.pop();
	}
	
	   
}
