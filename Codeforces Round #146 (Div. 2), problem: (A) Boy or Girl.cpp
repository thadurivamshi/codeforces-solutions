//https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<char> b;
    string str;
    char x;
    bool a;
    cin >>str;
    for(int i=0;i<str.size();i++){
        a=0;
        for(int j=0;j<b.size();j++){
            x=b[j];
            if(x==str[i]) a=1;
        }
        if(a==0){
            b.push_back(str[i]);
        }
    }
    if(b.size()%2 == 0)cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
