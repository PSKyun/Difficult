#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
char s1[1001];
char s2[1001];
string s3[1001][1001];
int dp[1001][1001];
int k;
int main(){
    scanf("%s%s",&s1,&s2);
    int s1_len=strlen(s1);
    int s2_len=strlen(s2);
    for(int i=0;i<s1_len;i++){
        for(int j=0;j<s2_len;j++){
            if(s1[i]==s2[j]){
                dp[i+1][j+1]=dp[i][j]+1;
                s3[i+1][j+1]=s3[i+1][j+1]+s3[i][j]+s1[i];
            }
            else{
                dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
                s3[i+1][j+1]=dp[i][j+1] > dp[i+1][j] ? s3[i][j+1] : s3[i+1][j];
            }
        }
    }
    cout << dp[s1_len][s2_len] << endl << s3[s1_len][s2_len];
}