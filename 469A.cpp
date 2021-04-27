//A. I Wanna Be the Guy
//https://codeforces.com/contest/469/problem/A
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
    set<int>lol;
    int n ; cin >>n ;
    int p , x; cin >> p;
    for (int i = 0; i < p ; ++i)
    {
        cin>> x;
        lol.insert(x);
    }
    int q , y; cin >> q;
    for (int i = 0; i < q  ; ++i)
    {
        cin>> y;
        lol.insert(y);
    }

    if (lol.size()==n)cout << "I become the guy."<< endl;
    else cout << "Oh, my keyboard!"<<endl;
}