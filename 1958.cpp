#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string s1,s2,s3;
int ans,dp[101][101][101];

int main(){
    cin >> s1 >> s2 >> s3;
    for(int i=1;i<=s1.length();i++){
        for(int j=1;j<=s2.length();j++){
            for(int k=1;k<=s3.length();k++){
                if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]){
                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                }
                else{
                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                }
            }
        }
    }
    cout << dp[s1.length()][s2.length()][s3.length()];
}