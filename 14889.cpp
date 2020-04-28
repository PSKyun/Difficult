#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int n;
int startlink[20][20];
int visit[20]={0,};
int _min=100;
int s_s, l_s=0;
void team(int idx,int cnt){
    int i,j;
    if(cnt==n/2){
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(visit[i]==0 && visit[j]==0)
                    s_s+=startlink[i][j]+startlink[j][i];
                if(visit[i]==1 && visit[j]==1)
                    l_s+=startlink[i][j]+startlink[j][i];
            }
        }
        _min=min(_min, abs(s_s-l_s));
        s_s=0;
        l_s=0;
        return;
    }
    for(i=idx;i<n;i++){
        visit[i]=1;
        team(i+1,cnt+1);
        visit[i]=0;     
    }
}

int main (){
    int i,j;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> startlink[i][j];
        }
    }//능력치 입력//
    team(0,0);
    cout << _min;
}