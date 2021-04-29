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
         string s;
         cin >>s;
         int z = 0;
         int m = s.length() ;
         for (int i = 0; i < s.size(); ++i)
         {
             if (s[i]=='0') z++;

         }
         int x = min(z, m-z );
         if (x % 2 == 0) cout << "NET" <<endl;
         else cout << "DA"<<endl;
     }
 }