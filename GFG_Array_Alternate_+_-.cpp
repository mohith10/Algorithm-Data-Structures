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
void alternate(ll n)
{
    ll j=-1;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<0)
            swap(a[i],a[++j]);
    }
    ll pos=j+1, neg=0;
    while(pos<n && neg<n && a[neg] < 0)
    {
        swap(a[neg],a[pos]);
        pos++;
        neg+=2;
    }
    printarray(n);
}

int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    alternate(n);




}
