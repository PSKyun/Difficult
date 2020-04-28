#include <iostream>
using namespace std;
int memo[41]={0,1};
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if(memo[n]!=0)
        return memo[n];
    else {
        memo[n]=fibonacci(n-1) + fibonacci(n-2);
        return memo[n];
    }
}

int main(){
    int T;
    scanf("%d",&T);
    while(T!=0){
        int N;
        scanf("%d",&N);
        if(N==0){
            printf("1 0\n");
            --T;
            continue;
        }
        printf("%d %d\n",fibonacci(N-1),fibonacci(N));
        --T;
    }
}