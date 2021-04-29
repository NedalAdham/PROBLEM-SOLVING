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
         int odds=0 , evens=0 ;
         int s ; cin >> s ;
         int arr[1005];
         for (int i = 0; i < s; ++i)
         {
             cin >> arr[i];
         }
         for (int i = 0; i < s; ++i)
         {
             if (i%2==0 && arr[i]%2!=0) evens++;
             else if (i%2==1 && arr[i]%2==0) odds++;
         }
         if (odds-evens==0) cout <<evens<<endl ;
         else cout <<"-1"<<endl;

     }
 }