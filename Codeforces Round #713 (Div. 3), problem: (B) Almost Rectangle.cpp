//https://codeforces.com/problemset/problem/1512/B

#include <iostream>

using namespace std;

int main()
{
   int t,n;
   cin >>t;
   while(t--){
       cin>>n;
       int a[2][2],x=0,i,j;
       char arr[n][n];
       for(i=0;i<n;i++){
           for(j=0;j<n;j++){
               cin>>arr[i][j];
               if(arr[i][j]=='*'){
                   a[x][0]=i;
                   a[x][1]=j;
                   x++;
               }
           }
       }
       if(a[0][0]==a[1][0] ){
           if(a[0][0]<n-1){
               arr[a[1][0]+1][a[0][1]]='*';
               arr[a[0][0]+1][a[1][1]]='*';
           }
           else{
               arr[a[0][0]-1][a[1][1]]='*';
               arr[a[1][0]-1][a[0][1]]='*';
           }
       }
       else if(a[1][1]==a[0][1]){
           if(a[1][1]<n-1){
               arr[a[0][0]][a[1][1]+1]='*';
               arr[a[1][0]][a[0][1]+1]='*';
           }
           else{
               arr[a[0][0]][a[1][1]-1]='*';
               arr[a[1][0]][a[0][1]-1]='*';
           }
       }
       arr[a[0][0]][a[1][1]]='*';
       arr[a[1][0]][a[0][1]]='*';
       for(i=0;i<n;i++){
           for(j=0;j<n;j++){
               cout<<arr[i][j];
           }
           cout<<endl;
       }
   }
   
   return 0;
}
