//A. Yet Another String Game
//1480/A
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
    int t ;
    cin >> t ;

    while (t--)
    {
        string s;
        cin >> s ;

        for (int i = 0; i < s.length(); ++i)
        {
            if (i%2==0)
            {
                if (s[i]!='a')s[i]='a';
                else s[i]='b';
            }
            else
            {
                if (s[i]!='z')s[i]='z';
                else s[i]='y';
            }
        }
        cout << s<<endl;
    }
}