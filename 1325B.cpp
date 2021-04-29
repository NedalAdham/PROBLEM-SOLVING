#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int main()
{
  int t ; cin >> t;
  while (t--){
      int su ,x ;
      cin >> su;
      set <int>seq ;
      for (int i = 0; i < su ; ++i) {
          cin >> x ;
          seq.insert(x);
      }
      cout << seq.size() << endl;
  }
}