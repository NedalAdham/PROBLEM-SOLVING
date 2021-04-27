//A. Next Round
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
    int k ,n ;
    cin >> n >> k ;

    for (int i = 0; i < n ; ++i)
    {
     cin >> arrr [i] ;
    }
    int car = arrr[k-1];
    int ctn =0 ;
    for (int i = 0; i < n ; ++i)
    {
        if(arrr[i] > 0 and arrr[i] >= car )ctn++;
    }

    cout <<ctn<<endl;

}