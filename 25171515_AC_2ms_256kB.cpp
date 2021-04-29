#include <iostream>
#include <string>
using namespace std;
int main()
{
    long n , resultgolden=0;
    cin >> n;
    while (n > 4){
        if (n >=500){
            n-=500;
            resultgolden+=1000;
        }
        else {
            n-=5;
            resultgolden+=5;
        }
    }
    cout << resultgolden;

}