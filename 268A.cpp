#include <iostream>
using namespace std ;
int main()
{
    int t ; cin >>t;
    int h[t+2]; int a[t+2];

    for (int i = 0; i < t ; ++i)
    {
     cin >> h[i]>>a[i];
    }

    int ctn=0;
    for (int i = 0; i < t ; ++i)
    {
        for (int j = 0; j < t; ++j)
        {
            if (h[i]==a[j])
                ctn++;
        }
    }

    cout <<ctn<<endl;
}