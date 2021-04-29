//A. Free Ice Cream
//https://codeforces.com/contest/686/problem/A//21
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
char arr[1000005];
int main()
{
    int n ;
    long long avail_ice;
    int gonecout = 0;
    cin >> n >> avail_ice;
    for (int i = 0; i < n ; i++) {
        char c;
        int cur_ice;
        cin >> c >> cur_ice;
        if (c == '+') 
        {
            avail_ice += cur_ice;
        }
        else 
            {
            if (avail_ice >= cur_ice) 
            {
                avail_ice -= cur_ice;
            
            } 
            else
                {
                    gonecout++;
                }
            }
    }
    cout << avail_ice << " "<< gonecout <<endl;
}