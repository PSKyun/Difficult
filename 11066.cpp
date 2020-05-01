#include <iostream>
#include <algorithm>
using namespace std;
int t,n,file[501],dp[501][501],sum[501];

int main(){
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        for(int j=1;j<=n;j++){
            cin >> file[j];
            sum[j]=sum[j-1]+file[j];
        }
        for(int diag=1;diag<n;diag++){
            for(int x=1;x<=n-diag;x++){
                int y=x+diag;
                dp[x][y]=2100000000;
                for(int k=x;k<=y;k++){
                    dp[x][y]=min(dp[x][y], dp[x][k]+dp[k+1][y]+sum[y]-sum[x-1]);
                }
            }
        }
        cout << dp[1][n] << endl;
    }
}