#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    map<char,vector<char>> m;
    for(int i=0;i<n;i++)
    {
        char x,y;
        cin>>x>>y;
        m[y].push_back(x);
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" has "<<it->second.size()<<endl;
    }
    
    
}
