#include <iostream>
#define X 1000000000
using namespace std;
long long n,k,dp[201][201];

int main (){
    cin >> n >> k;
    for(int i=0;i<=n;i++) dp[1][i]=1;
    for(int i=2;i<=k;i++){
        for(int j=0;j<=n;j++){
            for(int x=0;x<=j;x++){
                dp[i][j] += dp[i-1][j-x];
            }
            dp[i][j] %= X;
        }
    }
    cout << dp[k][n];
}