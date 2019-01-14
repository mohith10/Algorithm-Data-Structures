#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key,deleted=0;
    cout<<"Enter the number to be deleted...\n";
    cin>>key;
    int curr_point=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=key)
        {
            a[curr_point++]=a[i];

        }
        else deleted++;
    }
    for(int i=0;i<n-deleted;i++)
        cout<<a[i]<<" ";

}

