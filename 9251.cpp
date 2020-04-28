#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
char s1[1001];
char s2[1001];
int dp[1001][1001];
int main(){
    scanf("%s%s",&s1,&s2);
    int s1_len=strlen(s1);
    int s2_len=strlen(s2);
    for(int i=1;i<=s1_len;i++){
        for(int j=1;j<=s2_len;j++){
            if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    printf("%d",dp[s1_len][s2_len]);
}