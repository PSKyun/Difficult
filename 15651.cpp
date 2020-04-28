#include <iostream>
using namespace std;
int n,m,count;
int a[8];
void f(int count){
    int i;
    if(count==m){
        for(i=0;i<m;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for(i=0;i<n;i++){
            a[count]=i+1;
            f(count+1);
    }
}

int main(){
    cin >> n >> m;
    f(0);
}