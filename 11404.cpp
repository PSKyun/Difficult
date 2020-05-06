#include <iostream>
#include <algorithm>
using namespace std;
int n,bus,start,dest,cost,m[101][101],dp[101][101];

int main(){
    cin >> n >> bus;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) m[i][j]=0;
            else m[i][j]=987654321;
        }
    }
    for(int i=1;i<=bus;i++){
        cin >> start >> dest >> cost;
        m[start][dest]=min(cost, m[start][dest]);
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            dp[i][j]=m[i][j];
    for(int diag=1;diag<=n;diag++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=min(dp[i][j],dp[i][diag]+dp[diag][j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || dp[i][j]==987654321)
                cout << 0 << " ";
            else    
                cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}