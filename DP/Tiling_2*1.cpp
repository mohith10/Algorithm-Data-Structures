#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int calculate(int n)
{
     
    if(n==1 || n==2)
        return n;
    return calculate(n-1)+calculate(n-2);
}
int main() {
    int n;
    cin>>n;
    cout<<calculate(n);
   
    
}
