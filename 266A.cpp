//https://codeforces.com/contest/266/problem/A //13
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   int n ; cin >> n ;
   string col;cin >>col;

    int ctn =0;
    for (int i = 0; i < n-1; ++i)
    {
        if(col[i]==col[i+1])ctn++;
    }
    cout << ctn <<endl;
}