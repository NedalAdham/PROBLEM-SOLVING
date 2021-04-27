//A. Theatre Square
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
    long long n , m , a ; cin >> n >> m >> a ;
    long long horo , vert ;
    horo = n / a ;
    vert = m / a ;

    if (n%a != 0) ++horo ;
    if (m%a != 0) ++vert ;

    cout << horo * vert ;
}