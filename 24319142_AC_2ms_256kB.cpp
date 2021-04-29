#include <iostream>
using namespace std ;
int main()
{
    int a,b,c,add,sub,mult ;
    cin>>a>>b;
    add=a+b;
    sub=a-b;
    mult=a*b;
    if((add>sub ||add==sub) && add>mult){
        cout<<add;
    }else if ((sub>add||sub==add) && sub>mult){
        cout <<sub;
    }else {
        cout<<mult;
    }
}