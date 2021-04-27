//A. Laptops
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



    for (int i = 0; i < n ; ++i)
    {
        cin >> arrr[i] >> sum[i] ;
    }

    int flag = 0 ;

    for (int i = 0; i < n; ++i)
    {
        if (arrr[i] > sum[i])flag=1;
    }

    if (flag)cout << "Happy Alex"<<endl;
    else cout <<"Poor Alex"<<endl;

}