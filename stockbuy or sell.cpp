

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max_profit = 0, min_price = 1000;
    for(int i=0;i<n;i++){
        min_price = min(a[i],min_price);
        max_profit = max(max_profit,a[i]-min_price);
    }
    cout<<max_profit;
}
