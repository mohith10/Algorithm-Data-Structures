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
int min_rotated(ll start, ll end)
{
    if(start>end)
        return -1;
    if(start==end)
        return start;
    ll mid=(start+end)>>1;
    if(a[mid]>a[mid+1] && mid<end)
        return a[mid+1];
    if(a[mid-1]>a[mid] && mid>start)
        return a[mid];
    if(a[start]<a[mid])
        return min_rotated(start,mid-1);
    return min_rotated(mid+1,end);

}
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    cout<<"Minimum element in the rotated array is :"<<min_rotated(0,n-1);

}
