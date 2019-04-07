#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
ll a[100];
void reverse(ll start,ll end)
{
    while(start<end)
        swap(a[start++],a[end--]);

}
void printarray(ll n)
{
    for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll d;
    cin>>d;
    //d=n-(d%n);
    // Reversal algorithm
    ll l=0,r=(n-(d%n));
    reverse(0,r-1);
    reverse(r,n-1);
    reverse(0,n-1);
    printarray(n);



}
