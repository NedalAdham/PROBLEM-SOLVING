//A. Almost Prime
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


    int n ; cin >> n ; int ctn=0,out=0;
    for (int i = 6 ; i <= n ; ++i)
    {
        int ctn=0;
        for (int j = 0; prime[j] <= i ; ++j)
        {
            if (i%prime[j]==0)ctn++;
        }
        if (ctn == 2) out++;
    }
    cout <<out <<endl;
}