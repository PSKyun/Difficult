#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    int n;
    cin >> n;
    int height[502][502];
    for(int i=1;i<n+1;i++){
        for(int j=1;j<i+1;j++){
            scanf("%d",&height[i][j]);
        }
    }
    int _max[502][502]={0,};
    for(int i=1;i<n+1;i++){
        for(int j=1;j<i+1;j++){
            _max[i][j]=height[i][j]+max(_max[i-1][j],_max[i-1][j-1]);
        }
    }
    int res=0;
    for(int i=1;i<n+1;i++){
        res=max(res,_max[n][i]);
    }
    cout << res;
}