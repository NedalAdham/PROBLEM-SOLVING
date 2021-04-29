#include <iostream>
using namespace std;

int main()
{ int r , d , x2000,x ;
    cin>> r >> d >> x2000;
    for(int i=0; i<10; i++){
        x=(r*x2000)-d;
        cout<<x<<endl;
        x2000=x;
    }
}


