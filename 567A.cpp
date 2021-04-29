#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
using namespace std;



int main ()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;

    int arr[100005];


    for (int i = 0; i < t ; ++i)
    {
        cin >> arr[i] ;
    }

    for (int j = 0; j < t ; ++j)
    {
        int mn ,mx ;

        mx = max(abs(arr[j] - arr[0])  ,  abs(arr[j] - arr[t - 1]))  ;


        if (j == 0) mn = abs ( arr [ j ] - arr [j + 1]) ;
        else if (j == t - 1) mn = abs ( arr [j] - arr [j-1] ) ;
        else mn = min ( abs (arr[j] - arr[j+1])  , abs(arr[j]-arr[j -1]));


        cout << mn << " " <<mx <<endl ;
    }


}