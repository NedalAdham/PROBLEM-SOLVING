//https://codeforces.com/contest/344/problem/A
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n ; cin >>n ;
    int seq[100005];
    vector<char>lol;
    for (int i = 0; i < n ; ++i)
    {
     cin>>seq[i];
    }
    int ctn = 1;
    for (int i = 0; i < n-1 ; ++i)
    {
     if (seq[i]!=seq[i+1])ctn++;
    }
    cout <<ctn;
}