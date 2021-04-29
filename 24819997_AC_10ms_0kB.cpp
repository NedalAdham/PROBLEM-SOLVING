#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <string>
using namespace std ;
int main ()
{
    vector <int> numbercarrier;
    map <int , int>counter;
    int input ;
    while (cin >> input){
        if (counter[input] == 0) {
            numbercarrier.push_back(input);
            counter[input] = 1;
        } else counter[input] += 1;
    }

    for (int i =0 ;i< numbercarrier.size();++i){
        cout <<numbercarrier[i]<<" "<< counter[numbercarrier[i]]<<endl;
    }


}

