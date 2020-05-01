#include <iostream>
#include <algorithm>
using namespace std;
int t,n,m,coin[21],dp[10001];

int main(){
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> coin[i];
        }
        cin >> m;
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(j>=coin[i]) dp[j]+=dp[j-coin[i]];
            }
        }
        cout << dp[m] << endl;
        for(int j=1;j<=m;j++)
            dp[j]=0;
    }
}