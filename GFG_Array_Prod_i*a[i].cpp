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

int prod_sum(ll n)
{
    ll curr=0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            curr=i;
            break;
        }
    }
    ll temp=curr+1,prefix=n-1,sum=0;
    do
    {
        sum+=(a[curr]*prefix);
        //cout<<a[curr]<<endl;
        prefix--;
        curr=(curr+n-1)%n;
    }while(curr!=temp);
    return sum;

}
int main()
{
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++)
        cin>>a[i];
    cout<<"Sum exist with count as \n"<<prod_sum(n);



}
