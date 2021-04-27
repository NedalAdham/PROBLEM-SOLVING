//A. Arpa’s hard exam and Mehrdad’s naive cheat
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

    int n;
    cin>>n;
    if(n == 0) cout <<("1");
    else {
        if(n % 4 == 1) cout<<("8");
        else if(n % 4 == 2) cout<<("4");
        else if(n % 4 == 3) cout<<("2");
        else if(n%4 == 0) cout<<("6");
    }
}