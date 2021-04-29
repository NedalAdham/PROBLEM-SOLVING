//https://codeforces.com/contest/263/problem/A
/*/
 * 0-11	0-12	1-13
0-21	0-22	0-23
0-31	0-32	0-33
 */
#include <iostream>
#include <math.h>
using namespace std ;
int main()
{
    int x[9][9];
    int rowfound;
    int colfound;

    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5 ; ++j)
        {
            cin >> x[i][j];
            if (x[i][j]==1)
            {
                //cout << i << j <<endl;
                rowfound=abs(i-3);
                colfound=abs(j-3);
            }
        }
    }
    cout << rowfound+colfound<<endl;
    //cout << rowfound<<colfound<<endl;

}