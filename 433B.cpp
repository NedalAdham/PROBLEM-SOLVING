#include <iostream>
#include <algorithm>
#include <string>
long long  arr1[100001];
long long  sum2[100001];
long long  sum1[100001];
using namespace std;
int main()
{
    int  n ; cin >>n ;
    for (int i = 0 ; i < n ; ++ i )
    {
        cin >>arr1[i];
        sum1[i+1]= sum1[i]+arr1[i];
    }
    sort (arr1 , arr1+n);

     for (int i = 0 ; i < n ; ++ i)
     {
         sum2 [i+1]=sum2[i]+arr1[i];
     }

     int m ; cin >> m ;
     while (m--)
     {
         int command ,l, r  ;
         cin >> command >> l >> r  ;
         if (command != 1)
             cout << sum2[r] - sum2[l - 1] << endl;
         else {
             cout << sum1[r] - sum1[l - 1] << endl;

         }

     }

}