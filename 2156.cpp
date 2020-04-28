#include <iostream>
using namespace std;
int quan[10001];
int dp[10001];
int main (){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&quan[i]);
    }
    dp[0]=0;
    dp[1]=quan[1];
    dp[2]=quan[1]+quan[2];
    for(int i=3;i<=n;i++){
        dp[i]=max(dp[i-1],max(dp[i-2]+quan[i],dp[i-3]+quan[i-1]+quan[i]));
    }
    cout << dp[n];
}