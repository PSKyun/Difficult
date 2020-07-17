#include <iostream>
#include <algorithm>
#define DIVINE 1000000;
using namespace std;
int n,ans,dp[1001][2][3]; //날짜, 지각. 연속 결석

int main(){
    cin >> n;
    dp[1][0][0]=dp[1][1][0]=dp[1][0][1]=1;
    for(int i=2;i<=n;i++){
        dp[i][0][0]=(dp[i-1][0][0]+dp[i-1][0][1]+dp[i-1][0][2])%DIVINE;
        dp[i][0][1]=(dp[i-1][0][0])%DIVINE;
        dp[i][0][2]=(dp[i-1][0][1])%DIVINE;
        dp[i][1][0]=(dp[i-1][0][0]+dp[i-1][0][1]+dp[i-1][0][2]+dp[i-1][1][0]+dp[i-1][1][1]+dp[i-1][1][2])%DIVINE;
        dp[i][1][1]=(dp[i-1][1][0])%DIVINE;
        dp[i][1][2]=(dp[i-1][1][1])%DIVINE;
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<=2;j++){
            ans+=dp[n][i][j];
        }
    }
    cout << ans%DIVINE;
}