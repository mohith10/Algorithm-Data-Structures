#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int stock_price[n];
    for(int i=0;i<n;i++)
        cin>>stock_price[i];
    int res=0,min_so_far=stock_price[0];
    for(int i=0;i<n;i++)
    {
       min_so_far=min(min_so_far,stock_price[i]);
       res=max(res,stock_price[i]-min_so_far);
    }
    cout<<res;
}
