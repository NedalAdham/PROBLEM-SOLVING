#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s ; int a [100001];
    cin >> s; int len = s.size();
    a[1]=0;
    for ( int i = 1 ; i < len ; ++i)
    {
        if(s[i-1]==s[i]) a[i+1]=a[i]+1;
        else a[i+1]=a[i];
    }
    int m , l , r ; cin >> m ;
    while (m--)
    {
        cin >> l >> r ;
        cout << a[r]-a[l]<< endl ;
    }

}