#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque < char > d;
    string s,t;
    int flag;
    cin >> s >> t;
    for (int i=0;i<s.size();i++){
        d.push_back(s[i]);
    }
    for (int i=0;i<d.size();i++){
        d.push_front(d[s.size()-1]);
        d.pop_back();
        for (int j=0;j<t.size();j++){
            if (d[j]==t[j]){
                flag=1;
            }else{
                flag=0;
                break;
            }
        }
        if (flag==1){
            break;
        }
    }
    if (flag==1){
        cout << "Yes";
    }else{
        cout << "No";
    }
}