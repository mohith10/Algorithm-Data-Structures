// Online C++ compiler to run C++ program online
//Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int col0 = 1;
    for(int i=0;i<n;i++)
    {
        if(a[i][0]==0) col0=0;
        for(int j=1;j<m;j++){
            if(a[i][j]==0){
                a[i][0]=0;
                a[0][j]=0;
            }
        }
    }
    for(int i=n-1;i>-1;i--)
    {
        
        for(int j=m;j>-1;j--){
            if(a[i][0] == 0 || a[0][j]==0){
                a[i][j]=0;
            }
        }
        if(col0==0){
            a[i][0]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}
