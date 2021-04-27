//A. Keyboard
//https://codeforces.com/contest/474/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
int arr [10000007];
int sum [10000007];
char s [1050];
using namespace std;
int main()
{
    string sequancegiven = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char operation; cin >>operation;
    string given ; cin >> given;
    int ind;string finalanswer="";
    for (int i = 0; i < given.length(); ++i)
    {
     ind=sequancegiven.find(given[i]);
     if (operation=='R')finalanswer+=sequancegiven[ind-1];
     else finalanswer+=sequancegiven[ind+1];
    }
    cout << finalanswer<<endl;
}