#include <iostream>
#include <algorithm>
using namespace std;
int ring[101];

int main(){
    int n,tmp;
    cin >> n;
    for(int i=0;i<n;i++){
        scanf("%d",&ring[i]);
    }
    tmp=1;
    for(int i=1;i<n;i++){
        if(ring[0]>ring[i]){ //첫번째 링이 비교하는 링보다 큰 경우
            if(ring[0]%ring[i]==0){    //나누어 떨어질 떄
                printf("%d/1\n",ring[0]/ring[i]);
            }
            else{
                for(int j=2;j<1000;j++){
                    if(ring[0]%j==0 && ring[i]%j==0){
                        tmp=max(j,tmp);
                    }
                }
                printf("%d/%d\n",ring[0]/tmp,ring[i]/tmp); 
            }
        }
        else if(ring[0]<ring[i]){ //첫번째 링이 비교하는 링보다 작은 경우
            if(ring[i]%ring[0]==0){    //나누어 떨어질 떄
                printf("1/%d\n",ring[i]/ring[0]);
            }
            else{
                for(int j=2;j<1000;j++){
                    if(ring[0]%j==0 && ring[i]%j==0){
                        tmp=max(j,tmp);
                    }
                }
                printf("%d/%d\n",ring[i]/tmp,ring[0]/tmp); 
            }
        }
        else
        {
            printf("1/1\n");
        }
    }
}