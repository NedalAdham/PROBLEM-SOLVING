//A. Mahmoud and Longest Uncommon Subsequence
//https://codeforces.com/contest/766/problem/A //27
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cstring>
using namespace std;
int main()
{
    string a,b; cin >>a>>b;
    if (a==b)
    {
        cout<<"-1"<<endl;
    }
    else cout << max(a.length(),b.length())<<endl;

}