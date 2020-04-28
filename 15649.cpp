#include <iostream>
using namespace std;
int n,m,count;
int a[8];
int c[8]={0,};
enum{
    VISIT=1,
    UNVISIT=0
};

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
        if(c[i]==UNVISIT){
            c[i]=VISIT;
            a[count]=i+1;
            f(count+1);
            c[i]=UNVISIT;
        }
    }
}

int main(){
    cin >> n >> m;
    f(0);
}