#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,ctn=0;
        cin>>n>>m;
        if(m%2==0)
        {
            ctn=m/2;
            ctn*=n;
        }
        else if(m%2!=0)
        {
            m-=1;
            ctn=m/2;
            ctn*=n;
            if(n%2==0)
            {
                ctn+=n/2;
            }
            else
            {

                ctn+=n/2;
                ctn+=1;
            }
        }
        cout<<ctn<<endl;
    }
}