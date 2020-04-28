#include <iostream>
using namespace std;

int main(){
    int i,j,n,k,count;
    cin >> n >> k;
    count=0;
    int coin[n];
    for(i=0;i<n;i++){
        cin >> coin[i];
    }
    for(i=n-1;i>=0;i--){
        if(k%coin[i]==k) continue;
        else{
            count+=k/coin[i];
            k=k%coin[i];
            if(k==0) break;
        }
    }
    cout << count;
}