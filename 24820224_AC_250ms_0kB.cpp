#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <string>
using namespace std ;
int main ()
{
    map<string, string> map;
    string line;
    while ((getline(cin, line)) && line.length() > 0) {
        int space = line.find(' ');
        string a = line.substr(0, space);
        string b = line.substr(space + 1);
        map[b] = a;
    }
    while ((getline(cin, line)) && line.length() > 0) {
        if (map[line].length() == 0)
            cout << "eh"<< endl;
        else
            cout << map[line] << endl;
    }


}
