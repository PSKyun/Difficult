#include <iostream>
using namespace std;

int n,col[15],count;

bool promising(int i){
    int k=1;
    bool s=true;
    while(k < i && s){
        if(col[i]==col[k] || abs(col[i]-col[k])==i-k)
            s=false;
        k++;
    }
    return s;
}

void queen(int i){
    int j;
    if(promising(i)){
        if(i==n) count++;
        else{
            for(j=1;j<=n;j++){
                col[i+1]=j;
                queen(i+1);
            }
        }
    }
}

int main (){
    cin >> n;
    queen(0);
    cout << count;
}