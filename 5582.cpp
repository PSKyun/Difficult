#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

char s1[4001],s2[4001];
int ans,dp[4002][4002];

int main(){
    cin >> s1 >> s2;
    for(int i=0;i<strlen(s1);i++){
        for(int j=0;j<strlen(s2);j++){
            if(s1[i]==s2[j]){
                dp[i+1][j+1]=++dp[i][j];
                if(ans<dp[i+1][j+1])
                    ans=dp[i+1][j+1];
            }
        }
    }
    cout << ans;
}