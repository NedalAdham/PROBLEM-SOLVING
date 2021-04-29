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
         int n ; cin >> n ;
         if (n<=3) cout << "1"<<endl;
         else cout << n/2 <<endl ;
     }
 }