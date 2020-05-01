#include <iostream>
#include <algorithm>
using namespace std;
int n,maxbox,box[1001],dp[1001];

int main(){
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> box[i];
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            if(box[i]>box[j] && dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
            maxbox=max(maxbox, dp[i]);
        }
    }
    cout << maxbox+1;
}