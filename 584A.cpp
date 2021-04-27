//A. Olesya and Rodion
//https://codeforces.com/contest/584/problem/A
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

    int n,t,i;
    cin>>n>>t;
    if(t==10)
    {
        if(n==1)
        {
            cout<<-1<<endl;

        }
        else{

            for(i=0;i<n-1;i++)
            {
                cout<<1;
            }
            cout<<0<<endl;
        }
    }
    else{
        for(i=0;i<n;i++)
        {
            cout<<t;
        }
        cout<<endl;
    }
}