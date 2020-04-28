#include <iostream>
#include <algorithm>
using namespace std;
int n;
int ans[1001];
int sum;
int main (){
    cin >> n;
    int mon[n];
    for(int i=0;i<n;i++){
        scanf("%d",&mon[i]);
    }
    sort(mon, mon+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ans[i]+=mon[j];
        }
        sum+=ans[i];
    }
    printf("%d",sum);
}