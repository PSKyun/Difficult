#include <iostream>
#include <algorithm>
using namespace std;
long long n, m, k, answer;

int solve(long long x){
    long long a=0, b=0;
    for(long long i=5;i<=x;i*=5){
        a+=x/i;
    }
    for(long long i=2;i<=x;i*=2){
        b+=x/i;
    }
    return min(a, b);
}
int main (){
    cin >> n >> m;
    answer = solve(n)-(solve(m)+solve(n-m));
    cout << answer;
}