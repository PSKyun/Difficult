#include <iostream>
#include <algorithm>
using namespace std;
long long n,d[501],m[501][501],ans=10000000000;

int main (){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> d[i] >> d[i+1];
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1; j<=n-i;j++){
            for(int k=j;k<=j+i-1;k++){
                ans=min(m[j][k]+m[k+1][j+i]+d[j-1]*d[k]*d[j+i],ans);
            }
            m[j][j+i]=ans;
            ans=10000000000;
        }
    }
    cout << m[1][n];
}