//https://codeforces.com/problemset/problem/1499/A

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int t,n,k1,k2,w,b;
    cin >> t;
    while(t--){
        cin >> n>>k1>>k2>>w>>b;
        {
            if(w<=(min(k1,k2)+abs(k1-k2)/2) && b <= (n-max(k1,k2)+abs(k1-k2)/2)){
                cout<<"YES"<<endl;
            }
            else{
                cout <<"NO"<<endl;
            }
        }
    }

    return 0;
}
