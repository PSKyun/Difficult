#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n,w[16][16],dp[16][1 << 16]; //��Ʈ ����ŷ ��� 0���� �ʱ�ȭ
void input(){
    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> w[i][j];
}
int tsp(int cur, int stat){
    if(stat==(1 << n)-1){ //���� �湮�� ���(bit�� ���� �����ִ� ���)
        if(w[cur][0]==0)  //������ 0���� �߱� ������ �׶� 0���� ���� �� ������ ���Ѵ�
            return 987654321;
        else
            return w[cur][0]; //�� ������ �װ� ��ȯ
    }
    int &ret=dp[cur][stat];
    if(ret!=-1) //ó�� ����Ȱ� �ƴ϶��
        return ret; //�׳� ����� dp�迭 ��ȯ
    ret=987654321;  //ó�� ����Ǿ��ٸ� ���Ѵ밪���� ����
    for(int i=0;i<n;i++){
        if(stat & (1<<i)) continue;   //i�� ��� �湮�ߴٸ� ��ŵ
        if(w[cur][i]==0)  continue;    //�Ǵ� ���� ��ҿ��� i������ ���� ���� 0�̶�� ��ŵ
        ret = min(ret, tsp(i, stat | (1<<i))+w[cur][i]);
        //i����� �湮 ���ߴٸ� ���� �ּڰ��̶� i����� �湮���� ���̶� ��
    }
    return ret;
}
int main(){
    input();
    memset(dp, -1, sizeof(dp)); //dp�迭 -1�� �ʱ�ȭ
    printf("%d\n",tsp(0,1));
}