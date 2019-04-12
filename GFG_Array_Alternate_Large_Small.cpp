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
    sort(a,a+n);
    ll i=0,k=0,j=n-1;
    ll res[n];
    bool flag=true;
    while(k<n)
    {
        if(flag)
            {
                res[k++]=a[i++];
                flag=false;
            }
        else
        {
            flag=true;
            res[k++]=a[j--];
        }
    }
    for(ll i=0;i<n;i++)
        cout<<res[i]<<" ";

}
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    Alternate_Large_Small(n);
}
