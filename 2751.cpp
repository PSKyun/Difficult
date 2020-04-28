#include <iostream>
using namespace std;
void swap(int *a, int *b){ int tmp; tmp=*a; *a=*b; *b=tmp; };
void qs(int *a, int l, int r);
int part(int *a, int l, int r);

int main(){
    int n;
    cin >> n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    qs(a,0,n-1);
    for(i=0;i<n;i++){
        cout << a[i] << endl;
    }
}
int part(int *a, int l, int r){
    int p=a[l];
    int i=l+1; int j=r;
    while(1){
        while(a[i]<p && i<=r) i++;
        while(a[j]>p && j>=l) j--;
        if(i<j) swap(&a[i],&a[j]);
        else break;
    }
    swap(&a[l],&a[j]);
    return j;
}

void qs(int *a, int l, int r){
    int p;
    if(l<r){
        p=part(a,l,r);
        qs(a, l, p-1);
        qs(a, p+1, r);
    }  
}