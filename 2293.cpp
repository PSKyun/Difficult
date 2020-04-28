#include <iostream>
using namespace std;
int n,k,m[10001],dp[10001];

int main (){
    cin >> n >> k;
    for(int i=1;i<=n;i++)   cin >> m[i];
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j>=m[i])   dp[j]+=dp[j-m[i]];
        }
    }
    cout << dp[k];
}