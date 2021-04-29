#include <iostream>
using namespace std;
int main()
{
    int A , c , capital;
    A=0,c=0,capital=0;
    string s;
    cin>>s;
    if(s[0]=='A'){
        A++;
    }
    for(int i = 2 ;i<s.size()-1;i++){
        if(s[i]=='C'){c++;
        }
    }
    for (int i=0;i<s.size();i++)
    {
        if(isupper(s[i])){
            capital++;
        }
    }
    if (A==1&&capital==2&&c==1){
        cout<<"AC"<<endl;
    }else cout<<"WA"<<endl;}


