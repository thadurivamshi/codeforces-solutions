//https://codeforces.com/problemset/problem/1504/A


#include <iostream>

using namespace std;

bool chck(string s){
    bool x;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]){
            x=1;
            return 1;
        }
    }
    return 0;
    //0 means not palindroam
}

int main()
{
    int t;
    cin >>t;
    while(t--){
        bool temp1,tempp2;
        string s;
        cin >> s;
        if(chck('a'+s) || chck(s+'a')){
            cout <<"YES"<<endl;
            if(chck('a'+s))cout <<'a'+s<<endl;
            else if (chck(s+'a'))cout << s+'a'<<endl;
        }
        else cout <<"NO"<<endl;
    }
    return 0;
}
