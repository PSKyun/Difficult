#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n,w[16][16],dp[16][1 << 16]; //비트 마스킹 모두 0으로 초기화
void input(){
    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> w[i][j];
}
int tsp(int cur, int stat){
    if(stat==(1 << n)-1){ //전부 방문한 경우(bit가 전부 켜져있는 경우)
        if(w[cur][0]==0)  //시작점 0으로 했기 때문에 그때 0으로 가는 길 없으면 무한대
            return 987654321;
        else
            return w[cur][0]; //길 있으면 그것 반환
    }
    int &ret=dp[cur][stat];
    if(ret!=-1) //처음 실행된게 아니라면
        return ret; //그냥 저장된 dp배열 반환
    ret=987654321;  //처음 실행되었다면 무한대값으로 설정
    for(int i=0;i<n;i++){
        if(stat & (1<<i)) continue;   //i번 장소 방문했다면 스킵
        if(w[cur][i]==0)  continue;    //또는 현재 장소에서 i번으로 가는 길이 0이라면 스킵
        ret = min(ret, tsp(i, stat | (1<<i))+w[cur][i]);
        //i번장소 방문 안했다면 현재 최솟값이랑 i번장소 방문한후 값이랑 비교
    }
    return ret;
}
int main(){
    input();
    memset(dp, -1, sizeof(dp)); //dp배열 -1로 초기화
    printf("%d\n",tsp(0,1));
}