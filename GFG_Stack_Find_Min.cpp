#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef long long ll;
int main() {
	
	stack<pair<ll,ll>> s;
	ll mini=INT_MAX;
	for(ll i=0;i<5;i++)
	{
	    ll ele;
	    cin>>ele;
	    if(ele<mini)
	    mini=ele;
	    
	    s.push(make_pair(ele,mini));
	}
	while(!s.empty())
	{
	    cout<<s.top().first<<" "<<s.top().second<<endl;
	    s.pop();
	}
}
