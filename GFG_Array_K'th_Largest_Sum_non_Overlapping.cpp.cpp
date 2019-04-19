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
	}
	
	//Finding maximum subarray sum of non-overlapping intervals
	
	ll k;
	cin>>k;
	for(ll i=0;i<k;i++)
	{
	    ll max_so_far=0,res=INT_MIN,start=0,end=0,s=0;
	    for(ll i=0;i<n;i++)
	    {
	        max_so_far+=a[i];
	        if(max_so_far>res)
	        {
	            res=max_so_far;
	            start=s;
	            end=i;
	        }
	        else if(max_so_far < 0)
	        {
	            max_so_far=0;
	            s=i+1;
	        }
	    }
	    cout<<i+1<<" Maximum sum is: "<<res<<" from "<<start<<" to "<<end<<endl;
	    for(ll i=start;i<=end;i++)
	        a[i]=INT_MIN;
	}
}
