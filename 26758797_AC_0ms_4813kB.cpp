#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
using namespace std;
int main ()
{
    int t ; cin >> t ;
    while (t--)
    {
        string n ; cin >> n ;
        int sum =0 ;

        int s = n .size();

        for (int i = 0; i < s; ++i)
        {
            int l = n[i]-'0';
            sum += l ;
        }
        cout << sum << endl ;
    }
}


