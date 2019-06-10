#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    int n;
    cin>>n;
    map<ll,ll> m;
    while(n--)
    {
        ll ele;
        cin>>ele;
        m[ele]++;
    }
    int res=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        res+=(it->second<=1);
    }
    cout<<res;
    
}
