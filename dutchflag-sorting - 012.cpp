/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            int temp = a[low];
            a[low] = a[mid];
            a[mid]=temp;
            mid++;
            low++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            int temp = a[mid];
            a[mid] = a[high];
            a[high]=temp;
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
