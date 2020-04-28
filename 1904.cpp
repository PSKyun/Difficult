#include <iostream>
using namespace std;
int N;
int memo[1000000]={0,};
int _case=0;

int ans(int cnt){
    if(cnt==N){
        _case++;
        return 0;
    }
    if(cnt>N){
        return 0;
    }
    if(memo[cnt]!=0) return memo[cnt];
    else{
        memo[cnt+1]=ans(cnt+1);
        memo[cnt+2]=ans(cnt+2);
        return memo[cnt];
    }
}

int main(){
    scanf("%d",&N);
    ans(0);
    printf("%d",_case%15746);
}