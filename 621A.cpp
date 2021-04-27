//A. Wet Shark and Odd and Even
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
int arr [10000007];
int sum [10000007];

char s [1050];
using namespace std;
int main()
{
    int n ; cin >> n ;
    long long sum =0,minelement = 1000000000 ,l;
    for (int i = 0; i < n; ++i)
    {
        cin >> l ;
        sum+=l;
        if (l%2==1)
        {minelement=min(minelement,l);}
    }
    if (sum % 2 ==0)cout << sum<<endl;
    else cout <<sum - minelement<<endl;
}