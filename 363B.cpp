#include <iostream>
#include <algorithm>
#include <string>
int arr [1000003];
using namespace std;
int main()
{
    int lenth ,width ;
    cin >> lenth >> width ;
    int maxcumcanbe = 100000003;

    int found=0 ;

    for (int i = 1 ; i <=lenth ; ++ i)
    {
        cin >>  arr[i];
        arr[i]+=arr[i-1];
    }

    for (int i=width ; i<=lenth ; ++i)
    {
        if (maxcumcanbe> arr[i] - arr[i-width])
        {
            maxcumcanbe=arr[i] - arr[i-width] ;
            found=i;
        }
    }
    cout <<found+1-width<<endl ;
}