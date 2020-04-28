#include <iostream>
#include <algorithm>
using namespace std;

int n, p[10001], dp[10001];

int main (){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> p[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i]=max(dp[i], dp[i-j]+p[j]);
        }
    }
    cout << dp[n];
}