#include <iostream>
using namespace std;
int main()
{
        int k,x;
        cin >> k >> x;
        for (int i=1;i<(k*2);i++){
            cout << (x+(-k+i)) << " ";
        }
}
