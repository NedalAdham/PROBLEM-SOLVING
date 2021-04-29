//https://codeforces.com/contest/709/problem/A
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1000005];
int main()
{
    int n , mx , was;
    cin >>n >> mx >> was ;
    int x = was ;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] > mx )arr[i]=0;
        else continue;
    }
    int ctn = 0;
    int rim;
    for (int i = 0; i < n ; ++i)
    {
     was-=arr[i]; //cout << was <<endl ;
     if (was<0)
     {
         ctn++;//cout <<ctn <<endl;
         was=x;
     }

    }
    cout <<ctn ;
}