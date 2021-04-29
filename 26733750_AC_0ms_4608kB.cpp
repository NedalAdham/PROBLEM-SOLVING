#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <deque>
using namespace std;
int main () {

    int t, ele, x;
    deque <int>id;
    set<int> foff;


    cin >> t;


    for (int l = 0; l < t  ; ++l)
    {
        
            cin >> ele;
            id.push_back(ele);

            int k;
            cin >> k;
            for (int i = 0; i < k; ++i)
            {
                cin >> x;
                foff.insert(x);
            }

    }

    int s = id.size();

    for (int j = 0; j <s ; ++j)
    {
        foff.erase(id[j]);
    }
    int end3shanet5na2t = foff.size();
    cout << end3shanet5na2t <<endl ;
}