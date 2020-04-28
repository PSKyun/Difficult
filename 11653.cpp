#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,index;
    cin >> n;
    int a[100]={0,};
    index=0;
    for(;;){
        if(n<=1) break;
        for(int i=2;i<=9999999;i++){
            if(n%i==0){
                a[index]=i;
                index++;
                n=n/i;
                break;
            }
        }
    }
    sort(a,a+index);
    for(int i=0;i<index;i++){
        printf("%d\n",a[i]);
    }
}