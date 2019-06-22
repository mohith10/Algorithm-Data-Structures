#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define N 500
bool visit[N];
vector<ll> g[N];
stack<ll> st;
void DFS(int root)
{
    visit[root]=true;
    //cout<<root<<" ";
    for(int i=0;i<g[root].size();i++)
        if(!visit[g[root][i]])
            DFS(g[root][i]);
    st.push(root);
}

void make_Graph(string s1,string s2)
{
    for(int i=0;i<min(s1.length(),s2.length());i++)
    {
        if(s1[i]!=s2[i])
        {
            g[s1[i]-'a'].push_back(s2[i]-'a');
            break;
        }
    }
}
void Inverted_Stack()
{
    int a=st.top();
    st.pop();
   
    cout<<char(a+'a')<<endl;
    Inverted_Stack();
}
int main()
{
    string a[10];
    int n;
    n=3;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
        make_Graph(a[i],a[i+1]);
    cout<<"Graph is "<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<g[i].size();j++)
            cout<<char(i+'a')<<" "<<char(g[i][j]+'a')<<" "<<endl;
    cout<<"Order of characters"<<endl;
    for(int i=0;i<n;i++)
        if(!visit[i])
            DFS(i);
    Inverted_Stack();
    
    
    
}
