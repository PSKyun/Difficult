#include <iostream>
using namespace std;
int n,m,a,b,invite[502][502],check[502],ccheck[502],ans;

int main(){
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        cin >> a >> b;
        invite[a][b]=1;
        invite[b][a]=1;
    }
    for(int i=2;i<=n;i++){ //상근이 친구 체크
        if(invite[1][i]==1){
            check[i]=1;
            ccheck[i]=1;
        }
    }
    for(int i=2;i<=n+1;i++){ 
        if(check[i]==1){
            for(int j=1;j<=n;j++){
                if(invite[i][j]==1){  //상근이 친구의 친구 체크
                    ccheck[j]=1;
                }
            }
        }
    }
    for(int i=2;i<=n;++i)
        if(ccheck[i]) ans++;
    cout << ans;
}