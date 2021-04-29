#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
using namespace std;
int main ()
{
    int n ;
    int arr[10][10];

    cin >> n ;
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n; ++j)
        {

            if (j == 0)
            {
                arr[i][j] = 1;
            }
            else if (i == 0)
            {
                arr[i][j] = 1;
            }
            else arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }

        cout << arr[n-1][n-1];

    }