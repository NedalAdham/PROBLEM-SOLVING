//http://codeforces.com/contest/231/problem/A
#include <iostream>
using namespace std ;
int main()
{
    int t ; cin>> t;int p =0;
    while(t--)
    {
        int x; int arr [3];int sum=0;

        for (int i = 0; i < 3; ++i)
        {
            int x;cin >> x;
            sum+=x;
        }
        if (sum>=2)p++;
    }
    cout << p <<endl;
}