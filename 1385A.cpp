#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];

        sort(arr,arr+3);
        if(arr[1]==arr[2]) cout<<"YES"<<endl<<arr[2]<<" "<<arr[0]<<" "<<arr[0]<<endl;
        else cout<<"NO"<<endl;
    }
}