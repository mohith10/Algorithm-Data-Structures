#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> p;
    int n=4;
    while(n--)
    {
        int ele;
        cin>>ele;
        p.push(ele);
    }
    int res=0;
    while(p.size()>=2)
    {
        int a=p.top();
        p.pop();
        int b=p.top();
        p.pop();
        res+=(a+b);
        p.push(a+b);
    }
    cout<<res;
    
}
