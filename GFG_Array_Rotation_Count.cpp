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

int rot_count(ll n)
{
    ll count=0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            {
                count++;
                break;
            }
        count++;

    }
    return count;

}
int bin_rot_count(ll start,ll end)
{
    if(start>end)
        return 0;
    if(start==end)
        return start;
    ll mid=(start+end)>>1;
    if(mid<end && a[mid]<a[mid])
        return mid+1;
    if(mid<end && a[mid-1]>a[mid])
        return mid;
    if(a[end]>a[mid])
        return bin_rot_count(start,mid-1);
    return bin_rot_count(mid+1,end);

}
int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    cout<<"Rotation count is (Using Linear Search) "<<rot_count(n)<<endl;
    cout<<"Rotation count is (Using Binary Search) "<<bin_rot_count(0,n-1);


}
