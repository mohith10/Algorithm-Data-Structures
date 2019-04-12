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
void Arrange_Elements(ll n)
{
    ll ind[n];
    for(ll i=0;i<n;i++)
        cin>>ind[i];
    for(ll i=0;i<n;i++)
    {
        while(ind[i]!=i)
        {
            swap(a[i],a[ind[i]]);
            swap(ind[i],ind[ind[i]]);
        }
    }
    printarray(n);
    for(ll i=0;i<n;i++)
        cout<<ind[i]<<" ";
}

int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    Arrange_Elements(n);
}
