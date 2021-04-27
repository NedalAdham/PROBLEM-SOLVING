//B. New Year's Number
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
int main ()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ; cin >> n ;int flag = 0;
        for(int i=0 ; i<=n/2021; i++)
        {
            if((n - 2021*i)%2020 == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag==1)cout << "YES"<<endl;
        else cout << "NO" <<endl;
    }
}