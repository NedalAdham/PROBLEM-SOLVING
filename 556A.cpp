//Case of the Zeros and Ones
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
    cin >> n;

    string s ;
    cin >> s ;

    int zeros = 0 , ones = 0 ;
    for (int i = 0; i < n ; ++i)
    {
     if (s[i]=='1') ones++;
     else zeros++;
    }
    
    cout << abs(zeros-ones);
}