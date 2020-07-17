#include <iostream>
#include <algorithm>
using namespace std;
int n,m,a,b,go[21],dp[21][21][21],ans;
int tlqkf(int stage, int r, int l){
    if(stage==m+1)
        return 0;
    dp[stage][r][l]=min(abs(go[stage]-r)+tlqkf(stage+1,go[stage],l),
               abs(go[stage]-l)+tlqkf(stage+1,r,go[stage]));
    return dp[stage][r][l];
}
int main(){
    cin >> n >> a >> b >> m;
    for(int i=1;i<=m;i++)
        cin >> go[i];
    cout << tlqkf(1,a,b);
}