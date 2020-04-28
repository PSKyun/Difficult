#include <iostream>
#include <algorithm>
using namespace std;
int n,a[1001],dp[1001],tmp,ans;

int main(){
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(a[i]<a[j]){
                if(tmp < dp[j])
                    tmp=dp[j];
            }
        }
        dp[i]=tmp+1;
        if(ans < dp[i])
            ans=dp[i];
        tmp=0;
    }
    cout << ans;
}