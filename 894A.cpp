#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <stack>
#include <string>

    using namespace std;
int main()
{
    string s ; cin >> s;
    int ctn =0;
    for (int i = 0; i < s.size() ; ++i) {
        for (int j = i; j < s.size(); ++j) {
            for (int k = j; k < s.size (); ++k) {
                if (s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')ctn++;
            }
        }

    }
    cout <<ctn ;
}