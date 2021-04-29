//https://codeforces.com/contest/677/problem/A
#include <iostream>
using namespace std ;
int main()
{
    int p,h;cin >>p>>h;
    int x;
    int sum=0;
    for (int i = 0; i < p; ++i)
    {
        cin >> x;
        if (x > h) sum+=2;
        else sum++;
    }
    cout << sum<<endl;
}