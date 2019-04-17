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
    //Kadane's Algorithm
    ll max_curr=INT_MIN,max_till_now=0;
    
    for(ll i=0;i<n;i++)
    {
        max_curr+=a[i];
        max_till_now=max(max_till_now,max_curr);
        
        if(max_curr<0)
            max_curr=0;
    }
    cout<<"Maximum contigous Sum : "<<max_till_now;
    
        
	
}
