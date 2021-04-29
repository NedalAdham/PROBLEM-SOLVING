//http://codeforces.com/contest/734/problem/A#
#include <iostream>
using namespace std ;
int main()
{
    int g ; cin >> g ;
    int as=0;int ds=0;
    char score[g+1];cin>>score;
    for (int i = 0; i < g; ++i)
    {
        if (score[i]=='D')ds++;
        if(score[i]=='A')as++;
    }

    //cout <<as<<endl<<ds<<endl;
    if (as==ds)cout <<"Friendship"<<endl;
    if (as<ds)cout<<"Danik"<<endl;
    if (as>ds) cout << "Anton"<<endl;
}