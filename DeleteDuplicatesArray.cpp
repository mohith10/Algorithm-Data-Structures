#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];//Array should be sorted
    for(int i=0;i<n;i++)
        cin>>a[i];
    int write_index=1,deleted=0;
    for(int i=1;i<n;i++)
    {
        if(a[write_index-1]!=a[i])
        {
            a[write_index]=a[i];
            write_index++;
           // prev=a[i];

        }
        else {
                //prev=a[i];
                deleted++;
        }

    }
    for(int i=0;i<n-deleted;i++)
        cout<<a[i]<<" ";

}


