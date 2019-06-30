#include <iostream>
using namespace std;
int main()
{
    int x=10,y=5;
    cout<<x<<" "<<y<<endl;
    x=x^y;
    y=y^x;
    x=x^y;
    cout<<x<<" "<<y<<endl;
}
