#include <iostream>
#include <algorithm>
using namespace std;
int n,ans;
int s1[100001],s2[100001],dp[100001];

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> s1[i];
    }
    for(int i=1;i<=n;i++){
        cin >> s2[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s1[i]==s2[j]){
                dp[j]=++dp[j-1];
                ans=max(ans, dp[j]);
            }
            else{
                dp[j]=max(dp[j-1],dp[j]);
            }
        }
    }
    cout << dp[n];
}