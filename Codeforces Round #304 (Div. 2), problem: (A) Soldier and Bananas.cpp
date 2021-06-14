//https://codeforces.com/problemset/problem/546/A

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int k,n,w,a;
    cin >>k>>n>>w;
    a=w*(w+1)*k/2-n;
    if(a<=0)cout << 0;
    else cout <<a;
    return 0;
}
