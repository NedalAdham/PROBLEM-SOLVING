#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int main()
{
  string s ;
  int x , y ;
  cin >> x >> y ;
  cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'U') y++;
        if (s[i]=='D')y--;
        if (s[i]=='L')x--;
        if (s[i]=='R')x++;
    }
    cout <<x <<" "<<y ;
}


        
