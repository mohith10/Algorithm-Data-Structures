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
void replace(ll n)
{
    map<ll,ll> tab;
    for(ll i=0;i<n;i++)
        tab[a[i]]=1;
    for(ll i=0;i<n;i++)
    {
        if(tab[i]==1)
            a[i]=i;
        else a[i]=-1;
    }
    printarray(n);


}

int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    replace(n);



}
