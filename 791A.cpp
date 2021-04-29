#include <iostream>
using namespace std ;
int main()
{
   int a , b ; cin >>a>>b;
   int ctn =0;
   if (a==b)cout<<"1"<<endl;
   else
   {
       while (a<=b)
       {
           a*=3;
           b*=2;
           ctn++;
       }
       cout<<ctn;
   }
}