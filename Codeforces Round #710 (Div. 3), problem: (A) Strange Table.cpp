//https://codeforces.com/problemset/problem/1506/A

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--){
        long long int n,m,x,a,b;
        cin >> n>>m>>x;
        if(x%n==0)a=n;
        else a=x%n;
        
        if(x%n==0)b=x/n;
        else b=(x/n)+1;
        
        cout << (a-1)*m+b<<endl;
    }
    return 0;
}
