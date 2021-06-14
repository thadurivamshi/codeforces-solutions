//https://codeforces.com/problemset/problem/1512/A

#include <iostream>

using namespace std;

int main()
{
   int t,n;
   cin>>t;
   while(t--){
       cin>>n;
       int i,arr[n+1];
       for(i=1;i<n+1;i++){
           cin>>arr[i];
       }
       if(arr[1]!=arr[2] && arr[1]!=arr[3]){
           cout<<1<<endl;
           goto x;
       }
       if(arr[n]!=arr[n-1] && arr[n]!=arr[n-2]){
           cout<<n<<endl;
           goto x;
       }
       for(i=2;i<=n-1;i++){
           if(i!=1 && i!=n){
               if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
                   cout<<i<<endl;
                   break;
               }
           }
       }
       x:
       n=1;
   }
   
   return 0;
}
