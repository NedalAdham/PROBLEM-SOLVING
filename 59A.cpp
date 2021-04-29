//https://codeforces.com/contest/59/problem/A
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char lol [105];
    int u=0;int l=0;
    cin >>lol;
    for (int i = 0; lol[i]!=0; i++)
    {
        if (lol[i]>='a'&&lol[i]<='z')l++;
        else if (lol[i]>='A'&&lol[i]<='Z')u++;
    }

    if (l==u||l>u)
    {
        for (int i = 0; lol[i]!=0; ++i)
        {
            lol[i]=tolower(lol[i]);
        }
        cout<<lol<<endl;
    }
    else
        {
            for (int i = 0; lol[i]!=0; ++i)
            {
                lol[i]=toupper(lol[i]);
            }
            cout<<lol<<endl;

        }
}