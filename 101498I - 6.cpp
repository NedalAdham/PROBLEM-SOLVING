#include <iostream>
#include <algorithm>
#include <cstring>
#include <random>
using namespace std;

int main()
{
    int t ; cin >> t;
    while (t--)
    {
        int n , m ;
        cin >> n >> m ;
        if (n%2!=0 || m%2!=0){cout << "hasan" << endl;}
        else {cout << "abdullah" << endl;}
    }
}