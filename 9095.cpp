#include <iostream>
using namespace std;
int t, n, dp[12]={0, 1, 2, 4, 0,};

int main (){
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=4; j<=n; j++){
            dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
        }
        cout << dp[n] << endl;
    }
}
