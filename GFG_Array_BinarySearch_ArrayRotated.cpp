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
int rotated_Binary_search(ll start,ll end,ll k)
{
    if(start>end)
        return -1;

    ll mid=(start+end)>>1;
    if(a[mid]==k)
        return mid;
    if(a[mid]>=a[start])
    {
        if(k<a[mid] && k>=a[start])
            return rotated_Binary_search(start,mid-1,k);
        return rotated_Binary_search(mid+1,end-1,k);
    }
    if(k>a[mid] && k<=a[end-1])
        return rotated_Binary_search(mid+1,end-1,k);
    return rotated_Binary_search(start,mid-1,k);

}
int main()
{
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll k;
    cin>>k;
    cout<<"Found at position : "<<rotated_Binary_search(0,n,k)<<endl;



}
