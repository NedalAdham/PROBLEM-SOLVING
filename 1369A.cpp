#include <iostream>
using namespace std ;
int main ()
{
    int t ; cin >> t ;
    while (t--)
    {
        int n ; cin >> n ;
        int sides = n-2 * 180 / n ;
        if (n% 4 == 0) cout << "YES"<<endl ;
        else cout << "NO"<<endl ;
    }
}