#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    map<ll,ll> m;
    int a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    sort(a,a+n);
    int start=0,end=n-1,check=6,res=0;
    while(start<end)
    {
        int sum=a[start]+a[end];
        if(sum>check)
            start++;
        else if(sum<check)
            end--;
        else{
            start++;
            end--;
            res++;
        }
    }
    cout<<"Using Binary Search method : "<<res<<endl;
    res=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        int diff=abs(it->first-check);
        if(diff==it->first && it->second>1)
        {
            res++;
        }
        else if(it->first!=diff && m[diff])
            res++;
    }
    cout<<"Using Hashing "<<res/2;
}
