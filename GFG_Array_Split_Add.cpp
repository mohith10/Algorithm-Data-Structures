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
void reverse(ll s,ll e)
{
    while(s<e)
        swap(a[s++],a[e--]);

}
void Split_Array(ll n)
{
    ll k;
    cin>>k;
    reverse(0,k-1);
    reverse(k,n-1);
    reverse(0,n-1);
    printarray(n);

}


int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    Split_Array(n);


}
