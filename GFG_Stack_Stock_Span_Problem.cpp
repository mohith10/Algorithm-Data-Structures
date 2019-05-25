#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	stack<ll> s;
	ll n;
	cin>>n;
	ll price[n];
	for(ll i=0;i<n;i++)
	    cin>>price[i];
	
	//Main part
	s.push(0);
	vector<ll> res;
	res.push_back(1);
	for(ll i=1;i<n;i++)
	{
	    while(!s.empty() && price[s.top()]<price[i])
	        s.pop();
	    res.push_back(s.empty()?i:i-s.top());
	    s.push(i);
	}
	for(ll i=0;i<res.size();i++)
	    cout<<res[i]<<" ";
}
