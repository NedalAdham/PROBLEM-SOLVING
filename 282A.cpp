//A. Bit++
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
    int n ;
    cin >> n ;

    int ctn = 0 ;
    string lol ;
    while (n--)
    {
        cin >> lol;
        if (lol[1]=='+')ctn+=1;
        else ctn-=1;
    }
    cout << ctn <<endl;
}