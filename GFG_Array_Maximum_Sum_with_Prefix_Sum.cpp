#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ll n;
	cin>>n;
	ll a[n],s[n];
	for(ll i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(i==0)
	        s[i]=a[i];
	    else
	        s[i]=a[i]+s[i-1];
	}
	
	//Finding maximum subarray sum usign Prefix sum array
	
	ll min_so_far=0,res=INT_MIN;
	for(ll i=0;i<n;i++)
	{
	    res=max(res,s[i]-min_so_far);
	    min_so_far=min(min_so_far,s[i]);
	}
	cout<<res;
}
