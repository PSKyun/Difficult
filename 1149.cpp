#include <iostream>
using namespace std;
int N;
int R[1000],G[1000],B[1000];
int home[1000][3];
int main (){
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d%d%d",&R[i],&G[i],&B[i]);
    }
    home[0][0]=R[0];
    home[0][1]=G[0];
    home[0][2]=B[0];
    for(int i=0;i<N;i++){
        home[i][0]=min(home[i-1][1],home[i-1][2])+R[i];
        home[i][1]=min(home[i-1][0],home[i-1][2])+G[i];
        home[i][2]=min(home[i-1][0],home[i-1][1])+B[i];
    }
    cout << min(min(home[N-1][0],home[N-1][1]),home[N-1][2]);
}