#include <iostream>
using namespace std;
bool test(int x){
    for(int i=2;i<x;i++){
        if(x%i==0)
            return false;
    }
    return true;
}
int main (){
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0;i<3;i++){
        a[i]=i;
    }
    for(int i=3;i<=n;i++){
        a[i]=i;
    }
    for(;;){
        if(!test(a[n]))
            a[n]++;
        else
            break;
    }
    cout << n << endl;
    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }
}