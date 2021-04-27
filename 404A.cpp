//A. Valera and X
//https://codeforces.com/contest/404/problem/A //57
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
    int n ; cin >> n ;
    string s ;
    set <char> diagonal ;
    set <char> rim ;
    for (int i = 0; i < n ; ++i)
    {
        cin >> s ;
        for (int j = 0; j < n ; ++j)
        {
if ( i == j || i + j + 1  == n) diagonal.insert(s[j]);
else rim.insert(s[j]);
}
}

if (diagonal.size()==1 && rim.size()==1 && *diagonal.begin() != *rim.begin())
cout << "YES"<<endl ;
else cout << "NO"<<endl ;
}