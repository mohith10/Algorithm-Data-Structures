#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> p;
    int a[]={10, 9, 8, 7, 4, 70, 60, 50};
    int k=4,res[8],ind=0;
    for(int i=0;i<=k;i++)
        p.push(a[i]);
    for(int i=k+1;i<8;i++)
    {
        res[ind++]=p.top();
        p.pop();
        p.push(a[i]);
        
    }
    while(ind<8)
    {
        res[ind++]=p.top();
        p.pop();
       
        
    }
    for(int i=0;i<8;i++)
        cout<<res[i]<<" ";
    
}
