//https://codeforces.com/problemset/problem/1498/A

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

int getSum(long long int n){
    long long int sum = 0;
    while (n != 0){
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int x,y,n;
        cin>>n;
        x=n;
        k:
        y=getSum(x);
        if(__gcd(x,y)>1){
            cout << x<<endl;
            continue;
        }
        while(__gcd(x,y)==1){
            x++;
            goto k;
        }
    }
    return 0;
}
