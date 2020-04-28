#include <iostream>
using namespace std;

int main(){
    int n,i;
    cin >> n;
    long long a[n+1];
    a[0]=0;
    a[1]=1;
    for(i=2;i<n+1;i++){
        a[i]=a[i-1]+a[i-2];
    }
    cout << a[n];
}