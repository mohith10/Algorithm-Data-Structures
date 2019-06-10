#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    map<ll,pair<ll,pair<ll,ll>>> m;
    int res=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    pair<ll,ll> indices=make_pair(0,n);
    for(ll i=0;i<n;i++)
    {
        int ele=a[i];
        if(m.find(ele)==m.end())
        {
            
            m[ele]=make_pair(1,make_pair(i,-1));
        }
        else
        {
            (m[ele].first)++;
            m[ele].second.second=i;
        }
        if(m[ele].first>res)
        {
            res=m[ele].first;
            indices=m[ele].second;
        }
        else if(m[ele].first==res && (indices.second-indices.first>m[ele].second.second-m[ele].second.first))
        {
            indices=m[ele].second;
        }
        
    }
    cout<<"Smallest possible subarray with maximum frequent element\n";
    //cout<<indices.first<<" "<<indices.second<<endl;
    for(ll i=indices.first;i<=indices.second;i++)
        cout<<a[i]<<" ";
    
}
