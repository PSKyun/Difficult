#include <iostream>
#include <algorithm>
using namespace std;
int t, n, sticker[2][200001], dp[2][200001];
int main(){
    cin >> t;
    for(int k=0;k<t;k++){
        cin >> n;
        for(int i=0;i<2;i++){
            for(int j=1;j<=n;j++)
                cin >> sticker[i][j];
        }
        dp[0][1]=sticker[0][1]; dp[1][1]=sticker[1][1];
        for(int i=2;i<=n;i++){
            dp[0][i]=max(dp[1][i-1], dp[1][i-2])+sticker[0][i];
            dp[1][i]=max(dp[0][i-1], dp[0][i-2])+sticker[1][i];
        }
        cout << max(dp[0][n], dp[1][n]) << endl;
    }
}