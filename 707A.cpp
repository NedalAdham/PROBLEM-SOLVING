//A. Brain's Photos
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
    int n , m ; cin >> n>> m ;
    char c ;
    for (int i = 0; i < n * m ; ++i)
    {
        cin >> c ;
        if (c != 'W' && c != 'B' && c != 'G')
        {
            cout << "#Color" <<endl ;
            exit(0);
        }
    }
    cout << "#Black&White"<<endl;
}