//A. Carrot Cakes
//https://codeforces.com/contest/799/problem/A //20
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1000005];
int main()
{
    int n,t,k,d;
    cin >>n>>t>>k>>d;

    double lol = n/k;
    
    if (n%k!=0) lol++;

    if (lol*t>d+t)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}