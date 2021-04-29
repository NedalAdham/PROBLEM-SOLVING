#include <algorithm>
#include <iostream>
using namespace std;
// 2 ** 2
// even *** 0
//odd *** 1
 
int main()
{
    int t ; cin >> t ;
    while (t--){
        int n ; cin >> n ; 
        if (n == 2) cout << "2"<<endl;
        else if (n %2==1)cout << "1"<<endl;
        else cout << "0"<<endl ;
    }
}