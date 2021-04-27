//A. Panoramix's Prediction
//http://codeforces.com/contest/80/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
#include <cmath>
int arrr [10000007];
int surm [10000007];

char s [1050];
using namespace std;
int main()
{
   int n,m ; cin >> n >> m ;
   int carry = 0 ;
    for (int i = 0; i < 16 ; ++i)
    {
     if (prime[i] == n)carry=i ;
    }
    //cout <<carry <<endl ;

    if (prime[carry+1]!= m )cout << "NO"<<endl;
    else cout <<"YES"<<endl;

}