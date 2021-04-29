#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t ; cin >> t ;
    int a1,b1,a2,b2 ;
    while (t--){
        cin >> a1 >>b1 ;
        cin >> a2 >> b2 ;
        long sum =0 ;
        sum = ((a1*b1)+(a2*b2)) ;
        double sr = sqrt(sum);
        if (sr == floor(sr)&&max(a1,b1) == max(a2,b2))cout <<"YES"<<endl ;
        else cout << "NO" <<endl ;
    }
}