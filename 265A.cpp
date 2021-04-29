#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1000005];
int main()
{
    string s , t ;
    cin>>s >>t;
    int index =0;
    for (int i = 0; i < t.size() ; ++i)
    {
        if (t[i]==s[index])index++;
    }
    cout <<index+1;
}