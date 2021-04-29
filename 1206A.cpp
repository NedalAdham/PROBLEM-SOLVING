#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
    int k,l;
    cin >> k ;


    int a[k+1];
    //int y;
    for (int i = 0; i < k  ; ++i)
    {

        cin >> a[i];

    }


    cin >> l ;
    int b [l+1];
    //int x;
    for (int j = 0; j < l; ++j)
    {

        cin >> b[j];
    }


    sort (a,a+k);
    sort(b,b+l);


    cout<< a[k-1] << " " << b[l-1]<<endl;
}