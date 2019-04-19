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
	ll small=INT_MAX,second_small=INT_MAX;
	
	for(ll i=0;i<n;i++)
	{
	    if(a[i]<small)
	   {
	       second_small=small;
	       small=a[i];
	       
	   }
	   else if(a[i]<second_small)
	    second_small=a[i];
	}
	cout<<"Small "<<small<<endl<<"Second_small "<<second_small;
	
	
	   
}
