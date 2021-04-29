//A. Presents
//https://codeforces.com/contest/136/problem/A //26
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;
int main()
{
    map <int , int >present;
    int n ; cin >> n ;
    //vector< int> giv(n+1);
    for (int i = 1 ; i <= n  ; ++i)
    {
        int x; cin >>x;
        present[x]=i;//
    }

    map <int,int> ::iterator it;
    for (it=present.begin(); it!=present.end() ; ++it)
    {
     cout << it->second<<" ";
    }
    
}