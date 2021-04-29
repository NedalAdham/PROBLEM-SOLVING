#include <iostream>
using namespace std ;
int main ()
{
    int t ; cin >> t ;
    while (t--)
    {
        double a ; cin >> a ;
        double s = 360/(180-a);
        int ssdash = 360/(180-a);
        if (ssdash-s==0) cout<<"YES"<<endl;
        else cout << "NO"<<endl;
    }
}