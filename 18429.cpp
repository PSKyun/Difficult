#include <iostream>
using namespace std;
int N, K, weight[8];
int visit[8]={0,};
int _case=0;
int c[8]={500,};
void ans(int cnt){
    if(cnt==N){
        for(int i=0;i<N;i++){
            if(c[i]<500){
                return;
            }
        }
        _case++;
        return;
    }
    for(int i=0;i<N;i++){
        if(visit[i]==0){
            visit[i]=1;
            if(cnt==0) 
                c[cnt]=500+weight[i]-K;
            else
                c[cnt]=c[cnt-1]+weight[i]-K;
            ans(cnt+1);
            visit[i]=0;
        }
    }
}

int main(){
    cin >> N >> K;
    for(int i=0;i<N;i++){
        cin >> weight[i];
    }
    ans(0);
    cout << _case;
}