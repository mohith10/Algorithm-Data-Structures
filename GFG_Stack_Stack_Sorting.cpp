#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
stack<ll> st;
stack<ll> temp;
void sort_stack()
{
    
    temp.push(st.top());
    st.pop();
    while(!st.empty())
    {
        ll ele=st.top();
        
        st.pop();
        while(!temp.empty() &&temp.top()>ele)
            {
                st.push(temp.top());
                temp.pop();
            }
        temp.push(ele);
            
    }
}
int main()
{
    st.push(11);
    st.push(20);
    st.push(1);
    st.push(7);
    st.push(5);
    //st.push(1);
    cout<<"Original Stack 5 4 3 2 1"<<endl;
    sort_stack();
    cout<<"Stack after Sorting..."<<endl;
    while(!temp.empty())
    {
        cout<<temp.top()<<endl;
        temp.pop();
        
    }
}
