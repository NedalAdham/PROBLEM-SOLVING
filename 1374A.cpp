#include <iostream>
#include <algorithm>
#include<cmath>
 using namespace std;
 int main()
 {
     long long  t;
     cin>>t;
     while (t--)
     {
         int x, y , n , out=0;
         cin >> x >> y >> n ;
         int r = n % x ;
         if (r-y>=0) out = n - (r -y) ;
         else out = n-r-x+y;
         cout << out <<endl;
     }
 }