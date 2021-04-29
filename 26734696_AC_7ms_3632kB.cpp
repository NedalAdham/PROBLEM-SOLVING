#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
using namespace std;
int main ()
{
    int k , n ;
    cin >> k ;cin>>n;
    int arr[k+1];

    for (int i = 0; i < k ; ++i)
    {
        cin >>arr[i];

    }

    sort(arr,arr+k);


    int sum = 0;

    for (int j = 0; j < n ; ++j)
    {
        sum+=arr[j];
    }
    cout <<sum<<endl;
}