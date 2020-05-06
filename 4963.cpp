#include <iostream>
using namespace std;
int w,h,ans,m[51][51];
int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
bool visit[51][51];
void dfs(int hindex, int windex){
    int nx,ny;
    if(!visit[hindex][windex]){
        visit[hindex][windex]=true;
    }
    for(int i=0;i<8;i++){
        nx=hindex+dx[i];
        ny=windex+dy[i];
        if(nx>h || ny>w || nx<0 || ny<0)
            continue;
        if(!visit[nx][ny] && m[nx][ny]==1)
            dfs(nx, ny);
    }
}
int main(){
    for(;;){
        cin >> w >> h;
        if(w==0 && h==0)
            break;
        for(int i=1;i<=h;i++)
            for(int j=1;j<=w;j++)
                cin >> m[i][j];
        for(int i=1;i<=h;i++)
            for(int j=1;j<=w;j++)
                if(m[i][j]==1){
                    if(visit[i][j]==false)
                        ans++;
                    dfs(i, j); 
                } 
        cout << ans << endl;
        ans=0;
        for(int i=1;i<=h;i++)
            for(int j=1;j<=w;j++)
                visit[i][j]=false;
    }
}