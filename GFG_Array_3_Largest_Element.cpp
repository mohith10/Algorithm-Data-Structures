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
	ll first=-1,second=-1,third=-1;
	for(ll i=0;i<n;i++)
	{
	    if(a[i]>first)
	    {
	        third=second;
	        second=first;
	        first=a[i];
	        continue;
	    }
	    else if(a[i]>second)
	    {
	        third=second;
	        second=a[i];
	        continue;
	    }
	    else if (a[i]>third)
	    {
	        third=a[i];
	        continue;
	    }
	}
	// Another way of doing it, by taking it in heap than extract top 3 elements.
	//Here, the expected complexity is  O(n) < O(log(n))
	cout<<first<<" "<<second<<" "<<third<<endl;
}
