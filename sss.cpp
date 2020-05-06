#include <iostream>
using namespace std;

int main (){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=n/2+1){
                if(j-i<0 || j+i-n>=2) printf(" ");
                else printf("%d",i);
            }
            else{
                if(j+i<=n || i-j<0) printf(" ");
                else printf("%d",i);
            }
        }
        printf("\n");
    }
}