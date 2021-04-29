#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
using namespace std;
int main ()
{
    string s ; cin >>s ;
     int count=0 , total =0 ;

     int n = s.size();
    for (int i = 0; i < n ; ++i)
    {
        if (s[i]==('(')) count++ ;
        else
            {
            if (count!=0)
            {
                count -- ;
                total += 2 ;
            }
            }
    }
    cout << total << endl ;
}