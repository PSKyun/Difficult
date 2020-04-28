#include <iostream>
using namespace std;
int n,m,count;
int a[8];

void f(int count, int start){
    int i;
    if(count==m){
        for(i=0;i<m;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for(i=0;i<n;i++){
        if(i<start) continue;
        else{ 
            a[count]=i+1;
            f(count+1, i);
        }
    }
}

int main(){
    cin >> n >> m;
    f(0,0);
}