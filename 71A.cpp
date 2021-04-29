//A. Way Too Long Words
//https://codeforces.com/contest/71/problem/A /22
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
char arr[1000005];
int main()
{
    int t ; cin >> t;
    while (t--)
    {
        string s ; cin >> s ;
        if (s.size()<= 10 ) cout <<s<<endl;
        else cout <<s[0] << s.size()-2<<s[s.size()-1]<<endl;
    }

}