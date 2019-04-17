#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll n;
	priority_queue<ll> min_heap;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
	    ll ele;
	    cin>>ele;
	    min_heap.push(-ele);
	    
	}
	ll k;
	cin>>k;
	ll prod=1;
	while(k--)
	{
	    prod*=-min_heap.top();
	    min_heap.pop();
	}
	cout<<"Product is: "<<prod;
}
