#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
int arr [10000007];
int sum [10000007];
char s [1050];
using namespace std;
int main()
{
    int n ; cin >> n;
    int sum=0;
    for (int i = 0; i < n ; ++i)
    {
        cin >>arr[i] ;
        sum += arr[i];
    }

    sort(arr,arr+n);
    int take=0;int newsum=0;int looool=sum/2;
    for (int i = n-1 ; i >= 0  ; i--)
    {
        //cout<<arr[i]<<" "<<endl;
        /*/
         * 5
         * 4 2 2 2 2
         */
        if (newsum<=looool)
        {
            newsum+=arr[i];
            take++;
        }
        else break;
    }
    cout<<take<<endl;
}