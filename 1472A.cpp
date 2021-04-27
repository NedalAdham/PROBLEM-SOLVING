//B. Fair Division
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
    int t ; cin >> t ;
    while (t--)
    {
        int n ; cin >> n ;
        int twos=0,ones=0;
        for (int i = 0; i < n ; ++i)
        {
         cin >>arr[i];
         if (arr[i]==1)ones++;
         else if (arr[i]==2) twos++;
        }
        if (twos==ones)
        {
            if (ones%2==0&&twos%2==0)cout <<"YES"<<endl;
            else cout << "NO"<<endl;
        }
        else if (twos!=ones)
        {
            if ((ones==0&&twos%2==0)||(twos==0&&ones%2==0))cout <<"YES"<<endl;
            else if ((ones!=0&&ones%2==0)||(twos!=0&&twos%2==0&&ones%2==0))cout <<"YES"<<endl;

            else cout << "NO"<<endl;
        }

    }
}