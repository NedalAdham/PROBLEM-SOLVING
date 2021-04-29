//https://codeforces.com/contest/427/problem/A //14
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1000005];
int main()
{
    int n ; cin >> n ;

    for (int i = 0; i < n ; ++i)
    {
     cin>>arr[i];
    }

    int sum =0;int ctn=0;

    for (int i = 0; i < n ; ++i)
    {
        if (arr[i]>0)sum+=arr[i];
        else if (sum > 0)sum--;
        else ctn++;
    }
    cout<<ctn<<endl;
}