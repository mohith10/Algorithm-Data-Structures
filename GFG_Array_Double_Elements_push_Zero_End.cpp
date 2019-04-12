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

void Alternate_Large_Small(ll n)
{
    ll j=n;
    for(ll i=n-1;i>=0;i--)
    {
        if(a[i]==0)
           {
               swap(a[i],a[--j]);
               //i--;
           }
    }
    printarray(n);
    for(ll i=0;i<n;i++)
        a[i]=2*a[i];

    printarray(n);

}
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    Alternate_Large_Small(n);
}
