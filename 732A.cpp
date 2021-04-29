//https://codeforces.com/contest/732/problem/A //15
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1000005];
int main()
{
    int k ,r ; cin>>k>>r;
    for (int x = 1; x < 10; ++x)
    {
        if (x*k%10==0||x*k%10==r)
        {
            cout << x<<endl;
            break;
        }
    }
}