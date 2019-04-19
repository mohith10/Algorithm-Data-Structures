#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100];
ll Binary_Search(ll start,ll end)
{
    if(start>end)
        return end+1;
    if(start!=a[start])
        return start;
    ll mid=(start+end)/2;
    if(a[mid]==mid)
        return Binary_Search(mid+1,end);
    return Binary_Search(start,mid);
    
    
}
int main() {
	ll n;
	cin>>n;
    
    //Linear Approach
    for(ll i=0;i<n;i++)
        cin>>a[i];

    
    for(ll i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>1)
        {
            cout<<a[i-1]+1<<endl;
            break;
        }
    }
    
    //Time complexity- n
    
   // Binary Search Approach
   
    cout<<Binary_Search(0,n-1);
    
	   
}
