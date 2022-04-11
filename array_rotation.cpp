// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
           int temp = a[i][j];
           a[i][j] = a[j][i];
           a[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
     int low =0, high = n-1;
     while(low<high){
         int temp = a[i][low];
           a[i][low] = a[i][high];
           a[i][high] = temp;
           low++, high--;
     }
  }
  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
