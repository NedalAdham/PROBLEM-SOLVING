#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   while (n--) {
 
 
       int x;
       cin >>   x;
       int flag = 0;
       for (int i = 0; i < 101; i++)
       {
 
           if (flag == 1)
           {
               break;
           }
           for(int j=0;j<101;j++)
           {
               if(3*i+7*j==x)
               {
 
                   flag++;
                   break;
               }
           }
 
       }
       if(flag>=1)
       {
           cout<<"YES";
       }
       else cout<<"NO";
       cout<<endl;
   }
 
 
    return 0;
}