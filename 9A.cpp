//https://codeforces.com/contest/9/problem/A //18
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1000005];
int main()
{
    int x ,y ;
    cin >> x >> y ;
    int mx= max (x,y);
    //cout <<mx<<endl;
    string die_roll[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
    cout << die_roll[6-mx];
}