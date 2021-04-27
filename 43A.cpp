//A. Football
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
#include <cmath>
int arrr [10000007];
int surm [10000007];

char s [1050];
using namespace std;
int main()
{

    int n ; cin >> n;
    string lol = "";
    vector <string> vec;
    for (int i = 0; i < n; ++i)
    {
        cin >> lol;
        vec.push_back(lol);
    }

    sort (vec.begin(),vec.end()) ;



    if (n%2==0)
    {
        if (vec[n/2] == vec[0])cout << vec[0] << endl;
        else cout << vec[n - 1] << endl;
    }

    else
        {
            if (vec[n / 2 ] == vec[0])cout << vec[0] << endl;
            else cout << vec[n - 1] << endl;
        }

}