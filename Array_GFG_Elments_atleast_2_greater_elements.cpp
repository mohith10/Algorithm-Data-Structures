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
	ll maxi=-1,secondmaxi=-1;
	for(ll i=0;i<n;i++)
	{
	    if(a[i]>maxi)
	    {
	        secondmaxi=maxi;
	        maxi=a[i];
	        continue;
	    }
	    else if(secondmaxi<a[i])
	    {
	        secondmaxi=a[i];
	        continue;
	    }
	}
	for(ll i=0;i<n;i++)
	{
	    if(a[i]<secondmaxi)
	    cout<<a[i]<<" ";
	}
}
