#include <iostream>

using namespace std;
int main ()
{
    /*/
    int i = 0, j = 1;
    cout << i;
    int *ptr = &i;
    cout << i;

    i = 2;
    cout << i;
    *ptr = 3;
    ptr = &j;
    j = i;
    cout << i;
    *ptr = 4;
      /*/

    /*/
    int n , ctn=0 ,arr;
    cin >> n ;
    for (int i = 1; i <=n ; ++i) {
        cin >> arr;

        if ((i%2!=0)&&(arr%2!=0))ctn++;

    }
    cout<<ctn <<endl;

    cout << "Hello, world!"<<endl;
    cout << "Greetings from Illinois!" <<endl;
    /*/

    int n ,ac=0,wa=0,tle=0,re=0 ;
    string inp;
    cin >> n ;
    for (int i = 0; i < n ; ++i)
    {
        cin >> inp;
        if (inp =="AC") ac++;
        if (inp=="WA") wa++;
        if (inp=="TLE") tle++;
        if (inp=="RE") re++;

    }
    cout <<"AC x "<< ac <<endl;
    cout <<"WA x "<< wa <<endl;
    cout <<"TLE x "<< tle <<endl;
    cout <<"RE x "<< re <<endl;


    
}