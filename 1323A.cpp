//A. Even Subset Sum Problem
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
int arr [10000007];
int sum [10000007];
char s [105];
using namespace std;
int main()
{
    int t ; cin >> t ;
    while (t--)
    {
        int n ; cin >> n ;
        int index=0;
        for (int i = 0; i < n ; ++i)
        {

         cin >> arr[i] ;

        }
        for (int j = 0; j <n ; ++j)
        {
            if (arr[j]%2==0)
            {
                index = j + 1;
                break;
            }

        }
        if (index)cout <<"1"<<endl << index <<endl;
        else if (n>1) cout <<'2'<<endl<<"1 2"<<endl;
        else cout <<"-1"<<endl;
    }
}