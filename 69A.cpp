//A. Young Physicist
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
#include <fstream>

int arrr [10000007];
int sum [10000007];

using namespace std;
int main ()
{
    int n;
    cin >> n ;


    for (int i = 0; i < n * 3 ; ++i)
    {
        cin >> arrr[i];
    }


    int x = 0 , y = 0 , z = 0 ;
    for (int i = 0 ; i < n * 3 ; i+=3 )
    {
        x += arrr[0+i];
    }
    //cout << x <<endl;
    for (int i = 0 ; i < n * 3 ; i+=3 )
    {
        y += arrr[1+i];
    }
    //cout << y <<endl;

    for (int i = 0 ; i < n * 3 ; i+=3 )
    {
        z += arrr[2+i];
    }
    //cout << z <<endl;

    if (x==0 and y ==0 and z == 0) cout << "YES"<<endl;
    else cout << "NO" << endl;

}