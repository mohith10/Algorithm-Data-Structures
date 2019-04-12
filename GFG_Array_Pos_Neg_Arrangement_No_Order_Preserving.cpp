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
void Arrange_Pos_Neg(ll n)
{
    ll j=-1;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            swap(a[i],a[++j]);
        }
    }
    printarray(n);
}
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    Arrange_Pos_Neg(n);
}
