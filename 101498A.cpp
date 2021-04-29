#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main()
{
    int t  ;
    cin >> t ;

    while (t--)
    {

        int freq [100001];
        for (int i = 0; i < 100000; i++)
        {
            freq[i] = 0;
        }

        int n ; cin >> n ;
        for (int i = 0; i <n ; ++i)
        {
            string s ; int f ;
            cin >> s >> f ;
            freq[f]++;
        }
        int ans,max=0;
        for(int i=0;i<100000;i++)
        {
            if(freq[i]>max)
            {
                max=freq[i];
                ans=i;
            }
        }

        cout << ans << endl;
        ans = 0;
    }
}