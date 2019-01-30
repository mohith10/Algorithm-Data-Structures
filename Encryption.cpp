#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    getline(cin,s);
    ll n=0;
    string s1="";
    for(ll i=0;i<s.length();i++)
        {
            if(s[i]==' ')
                n++;
            else
            s1+=s[i];
        }
    n=s.length()-n;
    auto r=floor(sqrt(n));
    //cout<<n<<endl;
    auto c=ceil(sqrt(n));
    //cout<<r<<c;
    ll index=0;
    //cout<<"n="<<n<<"c="<<c<<"r="<<r<<endl;
    char m[(int)r][(int)c];
    for(ll i=0;i<r;i++)
    {
        for(ll j=0;j<c;j++)
           {
               //while(s[index++]==' ');
               m[i][j]=s1[index];
               //cout<<"at i j"<<i<<" "<<j<<" "<<m[i][j]<<endl;
               index++;
           }
    }
    string res="";
    for(ll i=0;i<c;i++)
       {
           for(ll j=0;j<r;j++)
           res+=m[j][i];
           res+=' ';
       }
      cout<<res;


}
