#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0,maximum_sum=a[0];
    for(int i=0;i<n;i++){
        sum+=a[i];

        if(sum>maximum_sum){
            maximum_sum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maximum_sum;
}
