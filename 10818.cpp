#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int _min,_max;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    _min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<_min) _min=a[i];
    }
    _max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>_max) _max=a[i];
    }
    cout << _min << " " << _max;
}