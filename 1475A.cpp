//A. Odd Divisor
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>

int arrr [10000007];
int surm [10000007];
using namespace std;
int powerOfTwo(long long n)
{
    return n && (!(n & (n-1)));
}
int main()
    {
        int t; cin >> t ;
        while (t--)
        {
            long long n ; cin >> n ;
            if (powerOfTwo(n))cout << "NO"<<endl;
            else cout <<"YES"<<endl;
        }
}

 