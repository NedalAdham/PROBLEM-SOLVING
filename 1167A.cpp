//A. Telephone Number
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
#include <cmath>
int arr [10000007];
int sum [10000007];

char s [1050];
using namespace std;
int main()
{
    int t ; cin >> t ;
    while (t--)
    {
        int n ; cin >> n ;
        string s ; cin >> s ;
        int lol = s.size();
        int ctn = 0 ;
        for (int i = 0; i < lol ; ++i)
        {
            if (s[i]=='8'&& lol-i  >= 11)
            {
                ctn = 1;
                break;
            }
            //else lol-=i;
        }

        if (ctn == 1) cout << "YES"<<endl;
        else cout <<"NO"<<endl;
    }
}