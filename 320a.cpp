//A. Magic Numbers
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
int arr [10000007];
char s [105];
using namespace std;
int main()
{
    int n ; cin >> n ;
    while (n!=0)
    {
        if (n%1000==144) n/=1000;
        else if (n%100==14)n/=100;
        else if (n%10==1)n/=10;
        else{

            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES"<<endl;
}