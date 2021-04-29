//A. Pangram
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
int arr [10000007];
char s [105];
using namespace std;
int main()
{
    set<char> lol;
    int n ; cin >> n;
    string s ; cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        s[i]=tolower(s[i]);

    }

    for (int i = 0; i < s.size() ; ++i)
    {
        lol.insert(s[i]);
    }
    //cout << lol.size()<<endl ;
    if (lol.size()==26)cout << "YES"<<endl;
    else cout << "NO"<<endl;


}