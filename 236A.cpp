//https://codeforces.com/contest/405/problem/A //7
#include <iostream>
#include <math.h>
#include <set>
#include <string>
using namespace std ;
int main()
{
    set<char>uni;
    string word ; cin >> word;
    for(char i:word)
    {
     uni.insert(i);
    }
    /*/
    for (auto j = uni.begin(); j != uni.end() ; ++j) {
        cout<< *j <<endl;
    }
     /*/

    if (uni.size() % 2 != 1)cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
}