#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	    cin>>a[i];
	    ll maxi=INT_MIN;
	    ll second_maxi=INT_MIN;
	    for(ll i=0;i<n;i++)
	    {
	        if(maxi<a[i])
	        {
	            
	            second_maxi=maxi;
	            maxi=a[i];
	        }
	        else if(a[i]>second_maxi)
	            second_maxi=a[i];
	            
	    }
	    cout<<"Second maximum: "<<second_maxi;
}
