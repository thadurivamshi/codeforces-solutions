//https://codeforces.com/problemset/problem/231/A

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int t,cont=0;
    cin >>t;
    while(t--){
        int a,b,c;
        cin >>a>>b>>c;
        if(a+b+c>=2)cont++;
    }
    cout<<cont;

    return 0;
}
