#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
ll a[100];

void printarray(ll n)
{
    for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

void Move_less_k(ll n)
{
    ll k;
    cin>>k;
    ll j=-1;
    ll res=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            res+=(i!=(j+1));
            swap(a[i],a[++j]);
        }
    }
    cout<<"Minimum swaps required : "<<res<<endl;
}
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    Move_less_k(n);
}
