#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int compute(int n)
{
    int a[n+1];
    a[0]=1;
    int i=0,j=0,k=0;
    int max_two=2,max_three=3,max_five=5;
    for(int x=1;x<n;x++)
    {
        int t=(min(max_two,min(max_three,max_five)));
        a[x]=t;
        if(t==max_two)
        {
            i++;
            max_two=a[i]*2;
        }
     if(t==max_three)
        {
            j++;
            max_three=a[j]*3;
        }
    if(t==max_five)
        {
            k++;
            max_five=a[k]*5;
        }
    }
    return a[n-1];
}
int main() {
	int n;
	cin>>n;
	cout<<compute(n);
}
