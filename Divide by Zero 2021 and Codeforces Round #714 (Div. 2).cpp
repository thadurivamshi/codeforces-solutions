//https://codeforces.com/problemset/problem/1513/A

#include <iostream>

using namespace std;

int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n<2*k+1 || (n<=2 && k!=0)){
            cout<<-1<<endl;
            continue;
        }
        for(i=1;i<=k;i++){
            cout<<i<<" "<<n-i+1<<" ";
        }
        for(i=k+1;i<=n-k;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
