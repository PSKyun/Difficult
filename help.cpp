#include <iostream>
using namespace std;

int main (){
    int j;
    for(int i=1;i<10;i++){
        for(j=2;j<6;j++){
            printf("%d*%d=%d\t",j,i,j*i);
        }
        while(j<10){
            printf("%d*%d=%d\t",j,i,j*i);
            j++;
        }
        cout << endl;
    }
}