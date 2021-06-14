//https://codeforces.com/problemset/problem/1501/A

#include <iostream>

using namespace std;

int main()
{
    int i,j,n,t,arr[2][100],tm[100],delay;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> n;
        delay =0;
        for(j=0;j<n;j++){
            cin >> arr[0][j]>>arr[1][j];
        }
        for(j=0;j<n;j++){
        	cin >> tm[j];
        }
        for(j=0;j<n-1;j++){
            delay += tm[j]-(arr[1][j]-arr[0][j])/2;
            if(delay<0)delay =0;
        }
        delay+=tm[n-1];
        cout << delay+arr[0][n-1]<<endl;
    }

    return 0;
}
