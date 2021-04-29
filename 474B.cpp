#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
     int n ;int sum =0;
    vector<int>vec ;int arr [100005];
    cin >> n ; //

    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i]; //
        sum += arr[i];
        vec.push_back(sum);
    }

    vector<int>::iterator lower;
    int m ; cin >> m ;//

    for (int j = 0; j < m; ++j) {
        int target ;
        cin >> target;//
        lower=lower_bound(vec.begin(),vec.end(),target);
        cout<<lower-vec.begin()+1<<endl;
    }
}