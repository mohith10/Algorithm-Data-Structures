#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int calculate(int n)
{
     int a[n][n];
     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;
    a[0][0]=1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if(j==0)
            {
                a[i][j]=a[i-1][i-1];
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i][j-1];
            }
            
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    cout<<calculate(n);
   
    
}
