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

int sum_exist(ll k,ll n)
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
    ll count=0;
    while(l!=r)
    {
        cout<<"f"<<endl;
        ll sum=a[l]+a[r];
        if(sum == k)
            {
                count++;
                if(l==((n+r-1)%n))
                    return count;
                l=(l+1)%n;
                r=(n+r-1)%n;
            }
        if(sum<k)
            {
                l=(l+1)%n;
                //cout<<"forca";
            }
        else
            r=(n+r-1)%n;


    }

    return count;
}
int main()
{
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll k;
    cin>>k;
    cout<<"Sum exist with count as \n"<<sum_exist(k,n);



}
