#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    int n,cnt;
    cin >> cnt;
    int a[cnt];
    for(int i=0; i<cnt; i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+cnt);
    if(cnt%2==0){
        n=a[0]*a[cnt-1];
    }
    else
    {
        n=a[cnt/2]*a[cnt/2];
    }
    cout << n;
}
