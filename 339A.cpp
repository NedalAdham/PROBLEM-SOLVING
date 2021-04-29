//A. Helpful Maths
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i+=2)
    {
        for(int rev=0;rev<i;rev+=2)
        {
            if(s[i]<s[rev])
            {
                swap(s[i],s[rev]);
            }
        }
    }
    cout<<s;
    return 0;
}