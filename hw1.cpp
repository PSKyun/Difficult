#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int t;
int n;
int node, child_l, child_r;
int level[1001];
int ans[1001];
int m;
int answer;
ifstream f("input.txt");

void init(){
    int i;
    for(i=0;i<=1000;i++){
        level[i]=0;
        ans[i]=0;
    }
    m=0; answer=0;
}
void make(){
    int j;
    f >> n;
        for(j=1;j<=n;j++){
            f >> node >> child_l >> child_r;
            if(level[node]==0){
                level[node]=j;
                ans[node]++;
            }
            if(child_l != -1){
                level[child_l]=level[node]+1;
                ans[level[child_l]]++;
            }
            if(child_r != -1){
                level[child_r]=level[node]+1;
                ans[level[child_r]]++;
            }
        }
}
void solve(){
    int k;
     for(k=1;k<=n;k++){
            if(m < ans[k])
                answer=k;
            m=max(ans[k], m);
        }
    printf("%d\n",answer);
}

int main(){
    int i,j,k;
    f >> t;
    for(i=0;i<t;i++){
        init();
        make();
        solve();
    }
}