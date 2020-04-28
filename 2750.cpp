#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    int max;
    max=a[0];
    int j,tmp;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(i==j) continue;
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout << a[i] << endl;
    }
}