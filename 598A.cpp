//A. Tricky Sum
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
#include <cmath>
int arr [10000007];
char s [105];
using namespace std;
int main() {

    int t;
    cin >> t;
    while (t--)
    {
        long long  n;
        cin >> n;
        long long  sum =(n+1)*n/2;
        for (int i = 0 ; pow(2,i) <=n  ; ++i)
        {
            sum -= (2*pow(2,i));
        }

        cout << sum <<endl;
    }
}