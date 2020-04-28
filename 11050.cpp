#include <iostream>
using namespace std;

int main(){
    int n,k,head=1,below=1;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        head*=i;
    }
    for(int i=1;i<=n-k;i++){
        below*=i;
    }
    for(int i=1;i<=k;i++){
        below*=i;
    }
    cout << head/below;
}