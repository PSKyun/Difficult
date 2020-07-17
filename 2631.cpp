#include <iostream>
using namespace std;
int n,m,vip[41],dp[41],ans=1;

int main(){
    cin >> n >> m;
    for(int i=1;i<=m;i++)  cin >> vip[i];
    dp[0]=1; dp[1]=1;
    for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
    for(int i=1;i<=m;i++)
        ans*=dp[vip[i]-vip[i-1]-1];
    ans*=dp[n-vip[m]];
    cout << ans;
}