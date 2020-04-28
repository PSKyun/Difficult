#include <iostream>
#define X 10007
using namespace std;
long long n, a[1001][10], ans;

int main (){
    cin >> n;
    for(int i=0;i<10;i++) a[1][i]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            for(int k=j;k<=9;k++){
                a[i][j]+=a[i-1][k];
                a[i][j]=a[i][j]%X;
            }
        }
    }
    for(int i=0;i<=9;i++) ans=(ans+a[n][i])%X;
    cout << ans;
}
