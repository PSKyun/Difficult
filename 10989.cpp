#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

float sp(float*, int, int);
int mid(float*, int, int);
int cb(float*, int, int);
int b(float*, int, int);


int main(){
    int n, i;
    float result;
    cin >> n;
    float a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    result = floor(sp(a,0,n)+0.5);
    cout << result << endl;
    result = mid(a,0,n);
    cout << result << endl;

    int c[8001], j;
    c[8001]={0,};
    for(i=0;i<n;i++){
        j=a[i];
        if(j<0){
            j=abs(j);
        }
        else{
            j+=4000;
        }
        c[j]++;
    }
    int max=c[0];
    for(i=0;i<8001;i++){
        if(max<c[i]) max=c[i];
    }
    int tmp[500000];
    for(i=0;i<8001;i++){
        if(max==c[i]) {
            
        }
    }
}

float sp(float *a, int l, int r){
    float sum;
    int i;
    sum=0;
    for(i=0;i<r;i++){
        sum+=a[i];
    }
    return sum/r;
}

int mid(float *a, int l, int r){
    int i=(l+r)/2;
    sort(a,a+r);
    return a[i];
}

int b(float *a, int l, int r){

}