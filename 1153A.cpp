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
std::vector <int> v ;
using namespace std;
int main()
{
int n , t ;
cin >> n >> t ;

    for (int k = 0; k < n; ++k)
    {

        int f , l ;
        cin >> f >> l ;
        int sum =  f ;

        while (t-1 >= sum)
        {
            sum += l ;
        }

//        cout << sum <<endl ;
        v.push_back(sum);
    }





    int minElementIndex = std::min_element(v.begin(),v.end()) - v.begin() ;
    cout << minElementIndex +1 ;


}

