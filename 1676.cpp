#include <iostream>
using namespace std;
int dp[501];
int main (){
    int n, tmp, answer=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        tmp=i;
        for(;;){
            if(tmp%5==0){
                tmp=tmp/5;
                ++answer;
            }
            else
                break;
        }
    }
    cout << answer;
}