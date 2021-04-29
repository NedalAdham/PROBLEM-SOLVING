#include <iostream>
using namespace std;

int main()
{
    int t ; cin >> t ;
    while (t--)
    {
        string a; cin >> a ;
        string b ;
        b+=a[0];b+=a[1];
        for (int i = 2; i < a.size(); ++i)
        {
            if (i%2==1)
                b+=a[i];
        }
        cout << b <<endl ;
    }
}
 