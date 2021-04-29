//A. Anton and Letters
//https://codeforces.com/contest/443/problem/A //21
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
char arr[1000005];
int main()
{
    string word ;
    getline(cin,word);
    set<char>uni;

    for (int i = 0; i < word.size(); ++i)
    {
        if (isalpha(word[i]) != 0)
            uni.insert(word[i]);
    }
    cout << uni.size()<<endl;
}