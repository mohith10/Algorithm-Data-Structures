#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll chamber,specimen;
    cin>>chamber>>specimen;
    ll chamb[chamber]={0};
    vector<ll> mass;
    for(ll i=0;i<2*chamber-specimen;i++)
        mass.push_back(0);
        ll sum=0;
    for(ll i=0;i<specimen;i++)
    {
        ll ele;
        cin>>ele;
        mass.push_back(ele);
        sum+=ele;
    }
    ll avg=sum/chamber;
    sort(mass.begin(),mass.end());
    ll index=0;
    for(ll i=0,j=mass.size()-1;i<j;i++,j--)
    {
        chamb[index%3]=mass[i]+mass[j];
        index++;
    }
    sum=0;
    for(ll i=0;i<chamber;i++)
        {
            cout<<chamb[i]<<" ";
            sum+=abs(avg-chamb[i]);
        }
        cout<<"\n"<<sum;

}
