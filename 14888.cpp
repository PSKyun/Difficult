#include <iostream>
#include <algorithm>
#define MAX 1000000001
using namespace std;

int n, _plus, _minus, _time, _div, cnt;
int a[12];
int _max = -MAX;
int _min = MAX;

void cal(int, int, int, int, int, int);

int main(){
    int i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> _plus >> _minus >> _time >> _div;
    cal(_plus,_minus,_time,_div,1,a[0]);
    cout << _max << endl;
    cout << _min << endl;
}

void cal(int p, int m, int t, int d, int c, int s){
    if(c==n){
        _max = max(_max, s);
        _min = min(_min, s);
        return;
    }
    if(p>0){
        cal(p-1,m,t,d,c+1,s+a[c]);
    }
    if(m>0){
        cal(p,m-1,t,d,c+1,s-a[c]);
    }
    if(t>0){
        cal(p,m,t-1,d,c+1,s*a[c]);
    }
    if(d>0){
        cal(p,m,t,d-1,c+1,s/a[c]);
    }
}