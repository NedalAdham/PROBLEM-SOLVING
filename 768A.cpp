//A. Oath of the Night's Watch
//https://codeforces.com/contest/768/problem/A // 32
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
#include <string>
#include <bitset>
int arr [10000007];
using namespace std;
int main() {
    int n;
    cin >> n;
    int mx = 0, mn = 1000000007, mxc = 0, mnc = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] == mx)mxc++;
        if (arr[i] == mn)mnc++;
    }

    //cout << mxc << " " << mnc << endl;
    if (mx == mn )cout << "0" << endl;
    else cout << n - mxc - mnc;
}