#include <iostream>
using namespace std;
int n,m,count;
int a[8];
int c[8]={0,};
enum{
    VISIT=1,
    UNVISIT=0
};

void f(int count, int start){
    int i;
    if(count==m){
        for(i=0;i<m;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    for(i=start;i<n;i++){
        if(c[i]==UNVISIT){
            c[i]=VISIT;
            a[count]=i+1;
            f(count+1, i+1);
            c[i]=UNVISIT;
        }
    }
}

int main(){
    cin >> n >> m;
    f(0,0);
}