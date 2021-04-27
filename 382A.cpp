// Ksenia and Pan Scales
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
#include <fstream>

int arrr [10000007];
int sum [10000007];
using namespace std;
int main ()
{
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    int pos  = s1.find_first_of('|');
    string r = s1.substr(pos+1);
    string l = s1.substr(0,pos) ;

    for (int i = 0; i < s2.size(); ++i)
    {
     if (l.length() > r.length())r+=s2[i];
     else l+=s2[i];
    }

    if (l.length() == r.length())
        cout << l <<'|'<< r ;
    else cout << "Impossible";
}