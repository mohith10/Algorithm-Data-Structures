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

bool sum_exist(ll k,ll n)
{
    ll l=0,r=0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            l=(i+1)%n;
            r=i;
            break;
        }
    }
    while(l!=r)
    {
        ll sum=a[l]+a[r];
        if(sum == k)
            return true;
        if(sum<k)
            {
                l=(l+1)%n;
            }
        else
            r=(n+r-1)%n;


    }
    return false;
}
int main()
{
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll k;
    cin>>k;
    if(sum_exist(k,n))
       {
            cout<<"Sum exist \n";
       }
    else cout<<"Doesn't exist \n";


}
