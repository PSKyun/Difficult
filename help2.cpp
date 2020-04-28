#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b;
    c = a*b > a+b ? a*b : a+b;
    printf("%d와 %d의 곱과 합 중에서 큰 수는 %d입니다.",a,b,c);
}