#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    map<string,string> m;
    map<string,string> a;
    for(int i=0;i<n;i++)
    {
        string x;string y;
        cin>>x>>y;
        a[x]=y;
        m[y]=x;
    }
    string start;
    for(auto it=a.begin();it!=a.end();it++)
    {
        if(m.find(it->first)==m.end())
        {
            start=it->first;
            break;
        }
    }
    while(1)
    {
        cout<<start<<" -> "<<a[start]<<endl;
        if(m.find(a[start])==m.end())
            break;
        start=a[start];
    }
    
}
