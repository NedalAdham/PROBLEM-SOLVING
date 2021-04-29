//https://codeforces.com/contest/228/problem/A //16
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1000005];
int main()
{
    int ctn=0; int arr[5];
    for (int i = 0; i < 4; ++i)
    {
        cin >>arr[i];
    }
    sort (arr,arr+4);
    for (int i = 0; i < 4; ++i)
    {
        if (arr[i]==arr[i+1])ctn++;
    }

    cout<<ctn;
}