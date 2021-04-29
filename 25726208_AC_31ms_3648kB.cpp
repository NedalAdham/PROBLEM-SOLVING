
#include <iostream>

    using namespace std;

    int main()
    {
        int files,giga,flashe,flashneeded=0;
        cin >> files >> giga >> flashe;
        int  m = flashe/giga;
        while (files>0){
            if (files>=m){
                files-=m;
                flashneeded++;
            }else{
                flashneeded++;
                break;
            }
        }
        cout << flashneeded;
        return 0;
    }

        
